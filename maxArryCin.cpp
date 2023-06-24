#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	const int SIZE = 5;
	int fmax[SIZE];
	int max = 0;
	
	for(int k = 0; k < SIZE;k++)
	{
		cout <<"please enter number: "<<endl;
		cin >> fmax[k];
		
		if(fmax[k] > max)//then
		{
			max = fmax[k];
		}
		
	
	}
	
	for(int k = 0; k < SIZE;k++)
	{
		cout << fmax[k]<<" ";
	}
	
	cout <<"the max number is = "<<max<<endl;
	cout << "the following are the values of the first, third, and seventh elements respectively "<<fmax[0]<<", "<<fmax[2]<<", "<<fmax[6]<< endl;
	
	
	_getch();
	return 0;
}
