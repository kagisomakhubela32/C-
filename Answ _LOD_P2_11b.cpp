#include "iostream"
#include "conio.h"
#include "fstream"

using namespace std;

int main()
{
	int const SIZE = 18;
	int numArry[SIZE];
	int sum = 0;
	int numbers;
	double Avg;
	int i = 0;
	
	
	ifstream numfile("numbers.dat");
	
    do
	{
		
		numfile >> numbers;
		
		if(i > -1 || i < 6)
		{
			sum = 0;
			
		
			numArry[i] = numbers;
				
			sum = sum + numArry[i];
			
			Avg = sum / SIZE;
			
			cout << "The avarege for the frist group is = " << Avg <<endl;
			
		}

			
				
		if(i >= 6 || i < 11)
		{
			sum = 0;
			
			//numfile >> numbers;
		
			numArry[i] = numbers;
				
			sum = sum + numArry[i];
			
			Avg = sum / SIZE;
			
			cout << "The avarege for the second group is = " << Avg <<endl;
			
		}
		
		
				
		if(i >= 11 || i < 18)
		{
			sum = 0;
			
			//numfile >> numbers;
		
			numArry[i] = numbers;
				
			sum = sum + numArry[i];
			
			Avg = sum / SIZE;
			
			cout << "The avarege for the thired group is = " << Avg <<endl;
			
		}


		i++; 
		
	}while(numfile.good());
	
	
	_getch();
	return 0;
}
