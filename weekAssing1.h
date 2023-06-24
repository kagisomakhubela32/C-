Week Assignment 1 

Question 1

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

Question 2 

(i)
	double *fPtr1;
	double *fPtr2;
	
(ii)
	fPtr2 = &salary;
	
(iii)
	fPtr1 = &invrease;
	
(iv)
	cout << fPtr1 << endl;
	
(v) 
	cout << *fPtr2 << endl;
	
(vi)
	if(salary > 4200.00)
	{
		fPtr2 = *fPtr2 + *fPtr1;
	}
	
(vii)
	fPtr2 = fPtr1;
	
(viii)
	cout << *fPtr2 << endl

Question 3

#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int arrySize;
	int smallestV = 999999;// estimation of the hightst value
	int indx;
	
	cout << "enter the number of integers: " << endl;
	cin >> arrySize;
	
	// declering the dynamic Arrey
	int *intList = new int[arrySize];
	
	for(int i = 0;i < arrySize;i++)
	{
		cout << "enter integer number: " << endl;
		cin >> intList[i];
		
		//finding the smallest value
		if(intList[i] < smallestV)
		{
			smallestV = intList[i];
			indx = i;// the position of the smallest value
		}
		
	}
	
	//outputs
	cout << "the smallest value in the arrey is = "<< smallestV << "\n"
	cout << "and it's position is = " << indx << endl;
	
	
	delete[] intList;//delete the memory
	
	_getch();
	return 0;
}





