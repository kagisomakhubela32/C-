#include "iostream"
#include "conio.h"

using namespace std;

int add(int num1 , int num2 )
{
	int sum;
	sum = num1 + num2;
	return sum;
}

int mult (int num1 , int num2)
{
	return ( num1 * num2);
	
}

int main()
{
	int sum, num1, num2,sum1,product1;
	
	cout <<"enter num1: "<<endl;
	cin >> num1;
	cout <<"enter num2"<<endl;
	cin >> num2;
	
	sum1 = add(num1 , num2);
	product1 = mult(num1 , num2);
	
	cout <<"sum is = "<<sum1<<endl;
	cout <<"product is = "<<product1<<endl;
	
	_getch();
	return 0;
} frjhnui
