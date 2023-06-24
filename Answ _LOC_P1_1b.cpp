 #include "iostream"
 #include "string"
 #include "conio.h"
 
 using namespace std;
 
 int main()
 {
  int i = 0; 
  char c;
  char strng[] = {"abefiogu"};
  int count = 0;
  
  while ((c = strng[i++]) != '\0')
	  
    switch(c) 
    { 
       case 'a': 
       case 'e': 
       case 'i': 
       case 'o': 
       case 'u':
	   
         cout << c;
         
         count = count + 1;
		 
    } // end of switch
	
  cout << endl;

  cout <<"The total number of vowels in the string: "<< count <<endl;
	 
	_getch();
	return 0;	
 }
