#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	//INPUTS
	double discounted;
	double cost;
	double perC;
	double discountAmo;
	
	cout <<"Enter the cost amout = R"<<endl; 
	cin >> cost;
	cout <<"Enter the discount percentege "<<endl;
	cin >>perC;
	//Processing
	perC = perC/100;
	discounted = cost * (1-perC);
	discountAmo = cost * (perC);
	//output
	cout <<"the discount amount = R"<<discountAmo<<endl;
	cout <<"the discounted amount = R"<<discounted<<endl;
	_getch();
	return 0;
	
	
	
	
}
