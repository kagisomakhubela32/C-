#include "iostream"
#include "conio.h"
#include "fstream"
#include "string"

using namespace std;

int main()
{
	ofstream empfile;
	empfile.open("employee.dat");
	
	empfile << "Anthony       A         10031       11.82         12/18/2010 \n"
			   "Burrows       W         10067       12.14         6/9/2011 \n"
			   "Fain          B         10083       10.79         5/18/2011 \n" 
			   "Janney        P         10095       12.57         9/28/2008 \n"
			   "Smith         G         10105       9.50          12/20/2006 \n";
	
	empfile.close();
	
	_getch();
	return 0;
}
