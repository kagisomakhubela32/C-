#include "iostream"
#include "conio.h"
#include "ctime"
#include "cstdlib"

using namespace std;

int main()
{
	int const SIZE = 1000;
	int random[SIZE];
	int num;
	int count1_50 = 0;
	int countRest = 0;
	
	srand(time(NULL));
	
	for(int i = 0;i < SIZE;i++)
	{
		num = 1 + rand()% (100 - 1) + 1;
		random[i] = num;
		
		if(random[i] >= 1 && random[i] <= 50)
		{
			count1_50 = count1_50 + 1;
		}
		else
			countRest = SIZE - count1_50;
	}
	
	cout <<"The total number of the numbers between 1 and 50 is = "<<count1_50<<endl;
	cout <<"The total number of numbers greater tha 50 = "<<countRest<<endl;
	
	
	_getch();
	return 0;
}
