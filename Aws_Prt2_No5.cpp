#include "iostream"
#include "conio.h"
#include "iomanip"

using namespace std;

int main()
{
	int const SIZE = 20;
	int numbers[SIZE] = {12 ,54 ,36 ,75 ,-56 ,0 ,0 ,78 ,-4 ,5 ,9 ,-2 ,-27 ,3 ,7 ,8 ,50 ,9 ,3 ,-6};
	int negative[SIZE];
	int positive[SIZE];
	int countP = 0;
	int countN = 0;

	
	//processing 
	
	for(int i = 0;i < SIZE;i++)
	{
		if(numbers[i] >= 0)
		{
			positive[i] = numbers[i];
			countP = countP + 1;
		}
		else if(numbers[i] < 0)
		{
			negative[i] = numbers[i];
			countN = countN + 1;
		}
			
		
	}
	
	//outputs
	
	cout <<"negative"<<endl;
	
	for(int i = 0;i < countN;i++)
	{
		cout <<negative[i]<<endl;
	}
	
	cout <<""<<endl;
	
	cout <<"positive"<<endl;
	
	for(int i = 0;i < countP;i++)
	{
		cout <<setw(2)<<positive[i]<<endl;
	}
	
	
	_getch();
	return 0;
}
