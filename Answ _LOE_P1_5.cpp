#include "conio.h"
#include "iostream"
#include "ctime"
#include "cstdlib"

using namespace std;

class simdieclass
{
	private:
		int die;
		
	public:
		//functions to generate rendom numbers from 1 to 6; 
		
		int renDienum(int die )
		{
			srand(time(NULL));
			die = 1 + rand()% (6 - 1 ) + 1;
			
			return die;
		}
		
		void showdie()
		{
			
			cout << "the number on the die is = "<< renDienum(die) << endl;
			
		}
	
};


int main()
{
	
	simdieclass displaydie;
	displaydie.showdie();
	
	_getch();
	return 0;
}
