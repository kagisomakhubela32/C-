#include "iostream"
#include "fstream"
#include "conio.h"

using namespace std;

int main()
{
	ofstream infofile;
	infofile.open("numbers.dat");
	
	infofile << "5  96  87  78  93  21  4  92  82  85  87  6  72  69  85  75  81  73 ";
	
	infofile.close();
	
	_getch();
	return 0;
}
