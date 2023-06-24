#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	const int RSIZE = 7;
	const int CSIZE = 5;
	int srow[RSIZE] = {5,8,9,3,21,8,1};
	int scolom[CSIZE] = {7,5,3,6,9};
	int num;
	int found = 0;
	
	cout <<"please enter the number your serching for: "<<endl;
	cin >> num;
	
	for(int r = 0;r < RSIZE;r++)
	{
		cout <<" "<<scolom[r]<<"\n";
		
		for(int c = 0;c < CSIZE;c++)
		{
			
			if(srow[c] == num)
			{
				cout <<"the number = "<<num<<" has been found in row = "<<c<<endl;
			}
			
		}
		cout <<endl;
	}
	cout <<endl;
	
	_getch();
	return 0;
}
