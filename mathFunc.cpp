#include "iostream"
#include "conio.h"
#include "cmath"
#include "iomanip"

using namespace std;

void inputs (double num1)
{
	cout <<"enter num1: "<<endl;
	cin >> num1;

}

double sqr(double num1)
{
	
	double sqr1 = pow(num1,0.5);
	
	return sqr1;
}

int main()
{
	double num1,sqr2;
	
	inputs(num1);
	sqr2 = sqr(num1);

	cout <<"the sqr "<<fixed<<setw(2)<<sqr2<<endl;
	
	_getch();
	return 0;
}
