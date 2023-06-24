 #include "iostream"
 #include "conio.h"
 #include "cstring"
 #include "string"
 #include "cctype"
 
 using namespace std;
 
 int main()
 {
	 string message;
	 
	 cout << "Please enter message" << endl;
	 getline(cin,message);
	 
	 for(int i = int(message.length());i > -1;i--)
	 {
		cout << message.at(i) << endl;
	 }
	 
	 /*for(int i = 0;i < int(message.length());i++ )
	 {
		cout << message.at(i) ;
	 }*/
	 
	 
	 _getch();
	 return 0;
 }
