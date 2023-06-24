/*classes and string*/
#include "iostream"
#include "conio.h"
#include "string"
#include "cstring"

using namespace std;

class messageclass
{
	private:
		string message1;
		string message2;
		int numMsg2;
		int numMsg1_2;
		
		
	public:
		
		string getmgs1(string message1)
		{
			return message1;
		}
		
		string getmgs2(string message2)
		{
			return message2;
		}
		
		int strlength(int numMsg2,string message2)
		{
			numMsg2 = message2.size();
			
			return numMsg2;
		}
		
		int strlengthMsg1(int numMsg1_2,string message1, string message2)
		{
			numMsg1_2 = (message1 + message2).size();
			
			return numMsg1_2;
		}
		
		void eraseMsg(int numMsg1_2,string message1, string message2)
		{
			
			cout << (message1 + message2).erase(strlengthMsg1(numMsg1_2,message1,message2) - strlength(numMsg2,message2)) << endl;
		}
		
		void printmgss(string message1, string message2)
		{
			cout << getmgs1(message1) + getmgs2(message2) << endl;
			cout << "the length of " << getmgs2(message2) << " is = " << strlength(numMsg2,message2) << endl;
			cout << "the size of msg1 and 2 combined is = " << strlengthMsg1(numMsg1_2,message1,message2) << endl;
			eraseMsg(numMsg1_2,message1,message2);
		}
		
};

int main()
{
	string message1, message2;
	int numMsg2;
	
	
	message1 = "Hellow my name is ";
	message2 = "kagiso";
	
	messageclass messageObj;
	messageObj. printmgss(message1, message2);
	
	
	
	
	_getch();
	return 0;
}
