#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 10;
	int Fmax[SIZE];
	int max = 0;
	int indx;
	
	for(int i = 0;i < SIZE;i++)
	{
		cout <<"Please enter an integer number"<<endl;
		cin >>Fmax[i];
		
		if(Fmax[i] >= max)
		{
			max = Fmax[i];
			indx = i;
		}
		
	}
	cout <<"Thehe maximum value is: "<< max << endl;
	cout <<"This is element number "<< indx <<" in the list of numbers"<<endl;
	
	
	_getch();
	return 0;
}
