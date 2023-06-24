#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 14;
	int grades[SIZE];
	double deviation[SIZE];
	int total = 0;
	double Avg;
	
	cout <<"Please enter grades: "<<endl;
	
	for(int i = 0;i < SIZE;i++)
	{
		cin >> grades[i];
		total = total + grades[i];
		
	}
	Avg = total / SIZE;
	
	for(int i = 0;i < SIZE;i++)
	{
		deviation[i] = ((1/SIZE)*(i - Avg)^2)^(1/2)
		
		cout <<"The deviation of grade "<<grades[i]<<" is = "<<deviation[i]<<" ";
		
	}
	
	
	
	_getch();
	return 0;
}
