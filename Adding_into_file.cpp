/*Adding in to a file using the number file txt*/

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
	
	infilenum. close();
	
	ofstream crnumlist;
	crnumlist. open("numbers.txt");
	
	crnumlist << "7 \n"
				 "5 \n";
	crnumlist << sum << endl;
	
	if(crnumlist.fail())
	{
		cout << "file additiong failed" << endl;
		exit(1);
	}
	else
		cout << "file additiong succsesfule" << endl;
	
	crnumlist. close();
	
	_getch();
	return 0;
}
