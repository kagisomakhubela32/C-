#include "iostream"
#include "conio.h"
#include "fstream"
#include "cctype"
#include "cstring"

using namespace std;

int main()
{
	
	ofstream empBkfile;
	ifstream empfile("E:\\Software Development\\NDip IT Software Development\\TPG111T\\videos\\LOD\\employee.dat");
	
	empBkfile.open("E:\\Software Development\\NDip IT Software Development\\TPG111T\\videos\\LOD\\employee.bak");
	
	empBkfile << empfile;
	
	empBkfile.close();
	
	
	_getch();
	return 0;
}
