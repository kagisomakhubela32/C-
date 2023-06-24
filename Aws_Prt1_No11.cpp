#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 10;
	double price[SIZE];
	double amount[SIZE];
	double total[SIZE];
	
	for(int i = 0;i < SIZE;i++)
	{
		cout <<"Please enter the price and the amount respectively"<<endl;
		cin >>price[i]>>amount[i];
		
		total[i] = price[i] * amount[i];
		
	}
	
	cout <<""<<endl;
	
	cout <<"toral \t price \t amount \t"<<endl;
	
	cout <<""<<endl;
	
	for(int i = 0;i < SIZE;i++)
	{
		cout <<total[i]<<"\t "<<price[i]<<" \t"<<amount[i]<<"\t "<<endl;
	}
	
	
	_getch();
	return 0;
}
