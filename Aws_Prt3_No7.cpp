#include "iostream"
#include "conio.h"

using namespace std;

double  calcavg(int testvals[], int SIZE, int sum)
{
	for(int i = 0;i < SIZE;i++)
	{
		sum = sum + testvals[i];
	}
	return sum / SIZE;
}

int main()
{
	int const SIZE = 14;
	int testvals[] = {89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73};
	int sum = 0;
	
	cout << "The Averege of the valuse is = " << calcavg(testvals, SIZE, sum) <<endl;
	
	_getch();
	return 0;
}
