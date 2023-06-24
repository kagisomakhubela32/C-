#include "iostream"
#include "conio.h"
#include "fstream"

using namespace std;

int main()
{
	int x,y,sum;
	
	ifstream infilenum;
	infilenum. open("numbers.txt");
	
	infilenum >> x >> y ;
	
	cout << "num 1 = " << x << endl;
	cout << "num 2 = " << y << endl;
	
	sum = x + y;
	
	cout << "the sum of x and y = " << sum << endl;
	
	
	
	_getch();
	return 0;
}

