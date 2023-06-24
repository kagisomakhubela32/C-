/*opennig a file using a 2D arrey and manipulate its contents*/

#include "iostream"
#include "fstream"
#include "conio.h"

using namespace std;

int main()
{
	ofstream opFile2DArry;
	opFile2DArry. open("File2DArry");
	
	opFile2DArry << "2 3 19 38 4 \n"
				 << "5 9 93 7 2 \n"
				 << "12 6 25 85 6 \n";
	
	if(opFile2DArry.fail())
	{
		cout << "file not created" << endl;
		exit(1);
	}
	else
		cout << "file created" << endl;
	
	opFile2DArry. close();
	
	ifstream inFile2DArry;
	inFile2DArry. open("File2DArry");
	
	int ROWSIZE = 3;
	int COLSIZE = 5;
	int a2DArry[ROWSIZE][COLSIZE];
	
	for(int r = 0;r < ROWSIZE;r++)
	{
		for(int c = 0;c < COLSIZE;c++)
		{
			inFile2DArry >> a2DArry[r][c];
			cout <<a2DArry[r][c] << "\t";
		}
		cout<<endl;
	}
	inFile2DArry. close();
	
	_getch();
	return 0;
}
