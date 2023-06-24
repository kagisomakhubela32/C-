#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int SIZE = 5;
	int sum = 0;
	double scorArry[SIZE];
	double Avg;
	double lowestScor = 101;
	
	for(int i = 0;i < SIZE;i++)
	{
		//promt for input
		cout << "please Enter Score: " << endl;
		cin >> scorArry[i];
		
		//to test if the inputs are valid
		if(scorArry[i] >= 0 && scorArry[i] <= 100)
		{
			
			sum = sum + scorArry[i];
			
			//To find the lowest score
			if(scorArry[i] < lowestScor)
			{
				lowestScor = scorArry[i];
			}
			
		}

	}
	
	//To calculate the average
	Avg = (sum - lowestScor) / 4;
		
	cout << "the average is = " << Avg << endl;
	
	_getch();
	return 0;
}
