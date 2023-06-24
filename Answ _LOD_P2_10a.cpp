#include "iostream"
#include "conio.h"
#include "fstream"

using namespace std;

int main()
{
	
	ofstream payfile;
	payfile.open("pay.dat");
	
	payfile << "Callaway, G. 16.00  40 \n"
			   "Hanson, P.   15.00  48 \n"
			   "Lasard, D.   16.50  35 \n"
			   "Stillman, W. 12.00  50 \n";
			   
	payfile.close();		   
	
	
	_getch();
	return 0;
}
