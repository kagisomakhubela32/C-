#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	
	int SIZE = 13;
	double rates[SIZE] = {6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65, 7.8, 8.2, 8.4, 8.6, 8.8, 9.0};
	double *dispPt;
	
	
	for(int i = 0;i < SIZE;i++)
	{
		*(dispPt + i ) = rates[i];
		
		cout << *(dispPt + i) << endl;
		
	}
	
	
	_getch();
	return 0;
}
