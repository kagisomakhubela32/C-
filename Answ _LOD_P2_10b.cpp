#include "iostream"
#include "fstream"
#include "conio.h"
#include "string"
#include "iosfwd"
#include "cstring"

using namespace std;

int main()
{
	ifstream opnpayfile;
	opnpayfile.open("E:\\Software Development\\NDip IT Software Development\\TPG111T\\videos\\LOD\\pay.dat");
	
	string name;
	double rate;
	int hours;
	string line = "";
	
	//opnpayfile >> name>> rate >> hours;
	
	while(opnpayfile.good())
	{
		/*cout << name << "\t" << rate << "\t" << hours << endl;
		
		opnpayfile >> name>> rate >> hours;*/
		
		getline(opnpayfile,line);
		
		cout << line << endl;
		
		
	}
	
	
	opnpayfile.close();
	
	_getch();
	return 0;
}
