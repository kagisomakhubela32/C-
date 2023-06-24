#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 9;
	double fmax = 0;
	double fmin = 1000;
	double slopes[SIZE] = {17.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24,6.92};
	
	for(int i = 0;i < SIZE;i++)
	{
		if(slopes[i] > fmax)
		{
			fmax = slopes[i];
		}
		if(slopes[i] < fmin)
		{
			fmin = slopes[i];
		}
		
	}
	// dispaly max and min values
	
	cout <<"The maximum value is = "<<fmax<<endl;
	cout <<"The mimimum value is = "<<fmin<<endl;
	
	
	_getch();
	return 0;
}
