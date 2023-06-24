#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 10;
	double raw[SIZE];
	double sorted[SIZE];
	double temp;
	
	//promt massege 
	cout <<"Please enter numbers: "<<endl;
	
	for(int i = 0;i < SIZE;i++)
	{
		//input
		cin >> raw[i];
	}
	
	for(int i = 0;i < SIZE;i++)
	{
		for(int x = 0;x < SIZE;x++)
		{
			if(raw[i] > sorted[x])
			{
				temp = raw[i];
				raw[i] = sorted[x];
				sorted[x] = temp;
	
			}
							
		}
		
	}

	cout <<""<<endl;
	
	for(int x = 0;x < SIZE;x++)
	{
		cout <<sorted[x] << endl;
	}
	
	
	
	_getch();
	return 0;
}
