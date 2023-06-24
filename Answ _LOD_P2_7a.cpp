#include "iostream"
#include "fstream"
#include "conio.h"

using namespace std;

int main()
{
	ofstream infofile;
	infofile.open("info.dat");
	
	infofile << "B Caldwell        555-88-2222                     10.50                    37 \n"
				"D Memcheck        555-77-4444                     12.80                    40 \n"
				"R Potter          555-77-6666                     16.54                    40 \n"
				"W Rosen           555-99-8888                     11.80                    35  \n";
	
	infofile.close();
	
	_getch();
	return 0;
}
