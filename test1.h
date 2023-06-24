#include "iostream"
#include "iomanip"
#include "conio.h"
#include "string"
using namespace std;

int main()
{
	// declaretioms
	int num1, num2, numO;
	double num3, num4, num0;
	string name;
	//inputs
	cout <<"Enter name: "<<endl;
	getline (cin,name);
	cout <<"Enter number: "<<endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	//testing
	num0 = (num1) + (num3);
	numO = (int)(num3 + num4);
	
	//outputs 
	cout <<"the answer for num0 is "<<num0<<endl;
	cout <<"The answer for numO is "<<numO<<endl;
	
	_getch();
	return 0;
	
}	
