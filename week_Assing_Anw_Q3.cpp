#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	int arrySize;
	//int *intList;
	int smallestV = 999999;
	int indx;
	
	cout << "enter the number of integers: " << endl;
	cin >> arrySize;
	
	int *intList = new int[arrySize];
	
	for(int i = 0;i < arrySize;i++)
	{
		cout << "enter integer number: " << endl;
		cin >> intList[i];
		
		if(intList[i] < smallestV)
		{
			smallestV = intList[i];
			indx = i;
		}
		
	}
	
	cout << "the smallest value in the arrey is = "<< smallestV << "\n";
	cout << "and it's position is = " << indx << endl;
	
	
	delete[] intList;
	
	_getch();
	return 0;
}
