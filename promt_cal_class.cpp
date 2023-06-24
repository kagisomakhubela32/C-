#include "iostream"
#include "conio.h"

using namespace std;

class numculcClass
{
			
	private:
		int num1;
		int num2;
		int sum;
	
	public:
		
		void promtmas(int num1, int num2)
		{
			cout << "please enter num1 and num2" << endl;
			cin >> num1;
			cin >> num2;
		}
		
		int sumcalcu(int sum, int &num1, int &num2)
		{
			sum = num1 + num2;
			return sum;
		}
		
		void getsum(int sum)
		{
			sum = sum;
			cout << "the sum is = " << sum << endl;
		}
	
};


int main()
{
	
	int num1,num2,sum;
	
	numculcClass numculcObj;
	numculcObj. promtmas(num1,num2);
	
	numculcClass numculcObj2;
	numculcObj2. sumcalcu(sum, num1, num2);
	
	numculcClass numculcObj3;
	numculcObj3. getsum(sum);
	
	//cout << "the sum is = " << sum << endl;
	
	_getch();
	return 0;
}
