#include "iostream"
#include "conio.h"

using namespace std;

void show(double rates[], int SIZE, double *dispPt)
{
	for(int i = 0;i < SIZE;i++)
	{
		*(dispPt + i)= rates[i];
		
		cout << *(dispPt + i) << endl;
		
	}
	
}

int main()
{

	int const SIZE = 9;
	double *dispPt;
	double rates[] = {6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0};
	
	show(rates, SIZE, dispPt);
	
	_getch();
	return 0;
}
