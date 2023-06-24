#include "iostream"
#include "string"
#include "cstring"
#include "fstream"
#include "conio.h"

using namespace std;

int main()
{
	ofstream crnumlist;
	
	crnumlist. open("numbers.txt");
	
	crnumlist << "7 \n"
				 "5 \n";
				 
	if(crnumlist.fail())
	{
		cout << "unable to create file" <<endl;
		
		exit(1);
	}
	else
		cout << "file creation succssesfull" <<endl;
	
	crnumlist. close();
	
	
	_getch();
	return 0;
}
