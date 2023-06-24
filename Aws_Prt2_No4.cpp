#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 5;
	double prices[SIZE] = { 9.92, 6.32, 12.63, 5.95, 10.29};
	double amounts[SIZE];
	int units[SIZE];
	
	//processing
	
	for(int i = 0;i < SIZE;i++)
	{
		cout <<"Please enter unit: "<<endl;
		cin >> units[i];
		
		amounts[i] = prices[i] * units[i];
		
	}
	
	//display outputs
	
	cout <<""<<endl;
	
	cout <<"Price  unitds  Amount"<<endl;
	
	cout <<""<<endl;
	
	for(int i = 0;i < SIZE;i++)
	{
		cout <<prices[i]<<"\t"<<units[i]<<" \t"<<amounts[i]<<endl;
	}
	
	_getch();
	return 0;
}
