/*opennning and adding a colunme in a file*/
#include "iostream"
#include "fstream"
#include "conio.h"
#include "string"
#include "cstring"

using namespace std;

int main()
{
	
	ofstream opintaddcolum;
	opintaddcolum. open("intaddcolum.txt");
	
	cout << "please enter ID, name, and amount" << endl;
	cout << "press ctrl z to exit" << endl;
	
	int IDnum;
	string name;
	double amount;
	
	while(cin >> IDnum >> name >> amount)
	{
		opintaddcolum << IDnum << "\t" << name << "\t" << amount << endl;
	}
	
 	if(opintaddcolum.fail())
	{
		cout << "file not created " << endl;
		exit(1);
	}
	else
		cout << "file created " << endl;
	
	opintaddcolum.close();
	
	
	_getch();
	return 0;
}
