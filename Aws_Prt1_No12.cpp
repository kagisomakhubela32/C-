#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int const SIZE = 50;
	int peopleTypes[SIZE];
	int temnt;
	int sumOf1s = 0;
	int sumOf2s = 0;
	int sumOf3s = 0;
	int sumOf4s = 0;
	
	cout<<"Please the type of the person: 1, 2, 3, 4 enter -1 to end the program: "<<endl;
	
	for(int i = 0;i < SIZE;i++ )
	{
		
		cin >> peopleTypes[i];
			
		if(peopleTypes[i] == -1)
		{
			i = SIZE;
		}	
		else if(peopleTypes[i] == 1)
		{
			sumOf1s = sumOf1s + 1;
		}
		else if(peopleTypes[i] == 2)
		{
			sumOf2s = sumOf2s + 1;
		}
		else if(peopleTypes[i] == 3)
		{
			sumOf3s = sumOf3s + 1;
		}
		else if(peopleTypes[i] == 4)
		{
			sumOf4s = sumOf4s + 1;
		}
		else
			cout<<"incorrect input Please enter the correct preson type: "<<endl;
			
	}
	
	
	cout<<""<<endl;
	cout<<"The total number of infants in present in the function is = "<<sumOf1s<<endl;
	cout<<""<<endl;
	cout<<"The total number of children in present in the function is = "<<sumOf2s<<endl;
	cout<<""<<endl;
	cout<<"The total number of teenagers in present in the function is = "<<sumOf3s<<endl;
	cout<<""<<endl;
	cout<<"The total number of adults in present in the function is = "<<sumOf4s<<endl;
		

	
	_getch();
	return 0;
}	
