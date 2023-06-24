#include "iostream"
#include "conio.h"

using namespace std;

void extend(double price[], double quantity[], double amount[], int SIZE)
{
	
	for(int i = 0;i < SIZE;i++)
	{
		amount[i] = price[i] * quantity[i];
	
	}
	
}

int main()
{
	int const SIZE = 10;
	double price[SIZE] = { 10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
	double quantity[SIZE]  = { 4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
	double amount[SIZE];
	
	for(int i = 0;i < SIZE;i++)
	{
		extend(price, quantity, amount, SIZE);
		
		cout << amount[i] << endl;
	}
	
	_getch();
	return 0;
}
