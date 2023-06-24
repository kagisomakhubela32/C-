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
	
	// calculeting
	ifstream infileintaddcolum;
	infileintaddcolum. open("intaddcolum.txt");
	
	double dscunt = 0.1;
	double dscuntAmo;
	double tatalAmoEch;
	
	infileintaddcolum >> IDnum >> name >> amount;
	
	do
	{
		dscuntAmo = amount * dscunt;
		tatalAmoEch = amount - dscuntAmo;
		cout << IDnum << "\t" << name << "\t" << amount << "\t" << dscuntAmo << "\t" << tatalAmoEch << endl;
		//opintaddcolum << IDnum << "\t" << name << "\t" << amount << "\t" << dscuntAmo << "\t" << tatalAmoEch << endl;
		
	}while(infileintaddcolum >> IDnum >> name >> amount);
	
	infileintaddcolum. close();
	
	// adding colunms
	ofstream opintaddcolum2;
	opintaddcolum2. open("intaddcolum.txt");
	
	do
	{
		opintaddcolum2 << IDnum << "\t" << name << "\t" << amount << "\t" << dscuntAmo << "\t" << tatalAmoEch << endl;
		
	}while(opintaddcolum2 << IDnum << name << amount << dscuntAmo << tatalAmoEch);
	
	if(opintaddcolum2.fail())
	{
		cout << "file not updated" << endl;
		//exit(1);
	}
	else
		cout << "file not updated" << endl;
	
	opintaddcolum2. close();

	_getch();
	return 0;
}
