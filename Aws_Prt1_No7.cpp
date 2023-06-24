#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 8;
	int grade[SIZE];
	int total = 0;
	double Avg;
	
	for(int i = 0;i < SIZE;i++)
	{
		cout <<"Please enter grade: "<<endl;
		cin >> grade[i];
		
		total = total + grade[i];
		
	}
	
	Avg = total / SIZE;
	
	cout <<"The numbers are as fallows: "<<endl;
	
	for(int i = 0;i < SIZE;i++)
	{
		cout <<grade[i]<<", ";
	}
	
	cout <<""<<endl;
	
	cout <<"The average is = "<< Avg <<endl;
	
	
	_getch();
	return 0;
}
