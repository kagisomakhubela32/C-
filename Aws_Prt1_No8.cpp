#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 10;
	int Fmax[SIZE];
	int max = 0;
	
	for(int i = 0;i < SIZE;i++)
	{
		cout <<"Please enter an integer number"<<endl;
		cin >>Fmax[i];
		
		if(Fmax[i] >= max)
		{
			max = Fmax[i];
		}
		
	}
	cout <<"the max value is = "<<max<<endl;
	
	
	_getch();
	return 0;
}
