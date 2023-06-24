#include "iostream"
#include "conio.h"

using namespace std;


void show(double rates[], int SIZE)
{
	for(int i = 0;i < SIZE;i++)
	{
		cout << rates[i] << endl;
	}
}

int main()
{
	int const SIZE = 9;
	double rates[] = { 6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0};
	
	show(rates, SIZE);
	
	_getch();
	return 0;
}
