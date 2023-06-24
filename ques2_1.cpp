
//This algorithm is to determine the number of reams needed for student assingment

#include "iostream"
#include "conio.h"

using namespace std;

int main()
{

  //begin
  
	int numAssingPgs, numStudnts, numreams, numPgsream, numPgsLeft,numPgshort ;
	
	//unputs
	cout << "Enter the Number of reams of paper that he will take to the copier room: "<<endl;
	cin >> numreams;
	cout << "Enter the Number of pages in the assignment: "<<endl;
	cin >> numAssingPgs;
	cout << "Number of first year students: "<<endl;
	cin >> numStudnts;
	
	// processing
	
	numAssingPgs = numAssingPgs * numStudnts;
	numPgsream = numreams * 500;
	numPgsLeft = numAssingPgs % numPgsream;
	numPgshort = numAssingPgs - numPgsream;
	
	if (numPgsLeft > 0) //then
	{
		cout << "The number of pages left is = " << numPgsLeft <<" pages "<<endl;
	}	
	else if (numPgshort > 0) //then
		{
		cout << "The nnumber of pages short is  = " << numPgsream <<" pages "<<endl;
		}
		else
		{
			cout << "the surficiant number of pages is = " << numAssingPgs <<endl;
		}	
		
	_getch();	
	return 0;
}
