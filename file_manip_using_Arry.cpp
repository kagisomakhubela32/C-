#include "iostream"
#include "conio.h"
#include "fstream"

using namespace std;

int main()
{
	int SIZE = 5;
	int Arryinpt[SIZE];
	int sum = 0;
	double avg;
	
	// openning a file
	ofstream opnumArry;
	opnumArry. open("numArry.txt");
	
	if(opnumArry.good())
	{
		cout << "file created" << endl;
	}
	else
	{
		cout << "filr not created" << endl;
		exit(1);
	}
		
	
	
	cout << "enter numbers: " <<endl;
	
	for(int x = 0;x < SIZE;x++)
	{
		cin >> Arryinpt[x];
		opnumArry << Arryinpt[x] << endl;
		
		sum = sum + Arryinpt[x];
		
	}
	
	opnumArry << "the sum of all the numbers is = " << sum << endl;
	
	opnumArry. close();
	
	//inside the file
	
	ifstream innumArry;
	innumArry.open("numArry.txt");
	
	for(int x = 0;x < SIZE;x++)
	{

		innumArry >> Arryinpt[x];
		
	}
	
	avg = sum / SIZE;
	
	/*innumArry << "the sum of all the numbers is = " << sum << endl;
	innumArry << "the avg of the numbers = "<< avg << endl;*/
	
	cout << "the avg = "<< avg << endl;
	
	innumArry. close();
	
	
	_getch();
	return 0;
}
