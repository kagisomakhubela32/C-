Name :Kagiso '
Surname:Makhubeka
Student number :216947533
Group 6/F


Outcome Assignment B

Part 1


Part 2

1.
 e. mile[0]
 
	*mailePtr
	
	
2.	
 a. *(message+6) 
 
	message[6]

Part 3

2.
 a.
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
		*(dispPt + i)= rates[i];
		
		cout << *(dispPt + i) << endl;
		
	}
	
	
	_getch();
	return 0;
}

 b.
#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	
	int SIZE = 13;
	double rates[SIZE] = {6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65, 7.8, 8.2, 8.4, 8.6, 8.8, 9.0};
	double *dispPt;
	int i = 0;
	
	do 
	{
		i = i + 1;
		
		*(dispPt + i)= rates[i];
		
		cout << *(dispPt + i) << endl;
		
	}while(i < SIZE);
	
	
	_getch();
	return 0;
}


Part 4

6
 a.
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





