// openning a file using a loop

#include "iostream"
#include "fstream"
#include "conio.h"

using namespace std;

int main()
{
	ofstream crtfilenum;
	crtfilenum. open("loopnum.txt");
	
	for(int x = 0;x <= 10;x++)
	{
		crtfilenum << x << endl;
	}
	
	if(crtfilenum.fail())
	{
		cout << "file not created" << endl;
		exit(1);
	}
	else
		cout << "file created" << endl;
	
	crtfilenum. close();
	
	
	_getch();
	return 0;
}
