 #include "iostream"
 #include "conio.h"
 #include "string"
 #include "cctype"
 
 using namespace std;
 
 int main()
 {
	 
	 string message;
	 int count = 0;
	 
	 cout << "Please enter message: " << endl;
	 getline(cin,message);
	 
	 for(int i = 0;i < message.length();i++)
	 {
		 if(message[i] == ' ')
		 {
			 count = count + 1;
		 }
		 
	 }
	 
	 cout << count + 1 << endl;
	 
	 _getch();
	 return 0;
 }
