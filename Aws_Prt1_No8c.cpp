#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 10;
	int Fmin[SIZE];
	int min = 0;
	int indx;
	
	for(int i = 0;i < SIZE;i++)
	{
		cout <<"Please enter an integer number"<<endl;
		cin >>Fmin[i];
		
		if(Fmin[i] <= min)
		{
			min = Fmin[i];
			indx = i;
		}
		
	}
	cout <<"Thehe minimum value is: "<< min << endl;
	cout <<"This is element number "<< indx <<" in the list of numbers"<<endl;
	
	
	_getch();
	return 0;
}
