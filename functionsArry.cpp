#include "iostream"
#include "conio.h"

using namespace std;

const int SIZE = 7;
	int fmax[SIZE] = {5,5,20,14,99,41};
	int max = fmax[0];
	int k;
void findMax(int,int,int);

int main()
{
	findMax(fmax[SIZE],SIZE, max);
	
	
	
	_getch();
	return 0;
}

int findMax(int fmax[],int SIZE,)
{
	
	const int SIZE = 7;
	int fmax[SIZE] = {5,5,20,14,99,41};
	int max = fmax[0];
	int k;
	
	for(int k = 0;k < SIZE; k++)
	{
		if(fmax[k] > max)
		{
			max = fmax[k];
		}
		
	}
	
	cout <<"the max number is = "<<findMax<<endl;

} 

