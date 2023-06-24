#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 1000;
	double grades[SIZE];
	double sum = 0;
	double Avg;
	int count = 0;
	
	for(int i = 0;i < SIZE;i++)
	{
		cout <<"Please enter grade: "<<endl;
		cin >> grades[i];
		
		if(grades[i] > 0)
		{
			sum = sum + grades[i];
			count = count + 1;
		}
		else
			i = SIZE;
		
	}
	
	Avg = sum / count;
	
	cout <<"the sum of the grades entered is = "<<sum<<endl;
	cout <<""<<endl;
	cout <<"the Average of the grades entered is = "<<Avg<<endl;
	cout <<""<<endl;
	
	for(int i = 0;i < count;i++)
	{
	
		if(grades[i] < Avg)
		{
			cout <<"*"<<grades[i]<<endl;
		}
		else
			cout << grades[i] <<endl;
		
	}
	
	
	_getch();
	return 0;
}
