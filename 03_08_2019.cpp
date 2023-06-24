#include <iostream>

using namespace std;

int main()
{
	int sumFinMarks = 0, studNum,sumMark,testMark,examMark;
	double predMark,FinMark,studAve;
	int studCount = 0;
	int studNumHighest = 0;
	int highMark = 0;
	cout << "please enter the student number (-1 to end)" << endl;
	cin >> studNum;
	
	while(studNum != -1)
	{
		sumMark = 0;
		cout <<"for "<<studNum<<" please enter" << endl;
		for(int tst = 1;tst <= 5; tst++)
		{
			cout << "\n\n test mark " << stst <<":";
			cin >> testMark;
			
			sumMark = sumMark + testMark;
			
		}
		
		predMark = sumMark / 5
		cout <<"\n\n please enter exam mark :";
		cin >> examMark;
		FinMark = (predMark + examMark)/2;
		
		cout << "predicate mark is = "<<predMark<< "and final mark is = "<<FinMark<<endl;
		sumFinMarks = sumFinMarks + FinMark;
		studCount++;
		
		if(FinMark > highMark)
		{
			highMark = FinMark
			studNumHighest = studNum
		}
		cout <<"please enter student number (-10 to end)"<<endl;
		cin >> studNum;
		
	}
	
	studAve = sumFinMarks / studCount;
	cout <<"the average mark obtained by the student is  = "<<studAve<< "%" <<endl;
	cout << "the student with the highest final mark is " <<studNumHighest<<" with a final mark of "<<highMark<<endl;
	
	
}