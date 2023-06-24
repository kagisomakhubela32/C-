#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 9;
	double prices[SIZE];
	
	for(int i = 0;i < 9;i++)
	{
		cout <<"place enter the prices for iterm "<<endl;
		cin >> prices[i];
		
	}
	
	cout <<"The data is as fallows: "<<endl;
	cout<<""<<endl;
	
	for(int i = 0;i < 3;i++)
	{
		cout <<prices[i]<<", ";
	}
	
	cout<<endl;
	cout<<""<<endl;
	
	for(int i = 3;i < 6;i++)
	{
		cout <<prices[i]<<", ";
	}
	
	cout<<endl;
	cout<<""<<endl;
	
	for(int i = 6;i < 9;i++)
	{
		cout <<prices[i]<<", ";
	}
	
	_getch();
	return 0;
}
