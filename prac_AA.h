1,
// this program is used to create a number txt file

#include "iostream"
#include "string"
#include "cstring"
#include "fstream"
#include "conio.h"

using namespace std;

int main()
{
	ofstream crnumlist;
	
	crnumlist. open("numbers.txt")
	
	crnumlist << "7 \n"
				 "5 \n";
				 
	if(crnumlist.fail)
	{
		cout << "unable to create file" <<endl;
		
		exit(1)
	}
	else
		cout << "file creation succssesfull" <<endl;
	
	crnumlist. close()
	
	
	_getch();
	return 0;
}


2.
/* this program is used to display do calculations in a file 
   then display the content on the console screen */
   
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
	
	
	_getch();
	return 0;
}

3,
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


4,
// openning a file using a loop

#include "iostream"
#include "fstream"
#include "conio.h"

using namespace std;

int main()
{
	ofstream crtfilenum;
	crtfilenum. open("loopnum.txt");
	
	for(int x = 0;x <= 10;x++)
	{
		crtfilenum << x << endl;
	}
	
	if(crtfilenum.fail())
	{
		cout << "file not created" << endl;
		exit(1);
	}
	else
		cout << "file created" << endl;
	
	crtfilenum. close();
	
	
	_getch();
	return 0;
}

5,
/*opennig a file and calculeting in side the file using ARREYS*/

#include "iostream"
#include "conio.h"
#include "fstream"

using namespace std;

int main()
{
	int SIZE = 5;
	int Arryinpt[SIZE];
	int sum = 0;
	double avg;
	
	// openning a file
	ofstream opnumArry;
	opnumArry. open("numArry.txt");
	
	if(opnumArry.good())
	{
		cout << "file created" << endl;
	}
	else
	{
		cout << "filr not created" << endl;
		exit(1);
	}
		
	
	
	cout << "enter numbers: " <<endl;
	
	for(int x = 0;x < SIZE;x++)
	{
		cin >> Arryinpt[x];
		opnumArry << Arryinpt[x] << endl;
		
		sum = sum + Arryinpt[x];
		
	}
	
	opnumArry << "the sum of all the numbers is = " << sum << endl;
	
	opnumArry. close();
	
	//inside the file
	
	ifstream innumArry;
	innumArry.open("numArry.txt");
	
	for(int x = 0;x < SIZE;x++)
	{

		innumArry >> Arryinpt[x];
		
	}
	
	avg = sum / SIZE;
	
	/*innumArry << "the sum of all the numbers is = " << sum << endl;
	innumArry << "the avg of the numbers = "<< avg << endl;*/
	
	cout << "the avg = "<< avg << endl;
	
	innumArry. close();
	
	
	_getch();
	return 0;
}


6,
/*opening a file with a horizontal numbers and displaying it*/

/*opening a file with a horizontal numbers and displaying it*/

#include "iostream"
#include "conio.h"
#include "fstream"

using namespace std;

int main()
{
	//openning a file
	ofstream ophorizonnum;
	ophorizonnum. open("horizonnum.txt");
	
	ophorizonnum << "2 3 4 9 6 9 7 22 19 " << endl;
	
	if(ophorizonnum.good())
	{
		cout << "file created" << endl;
	}
	else
		cout << "file not created" << endl;
	
	ophorizonnum. close();
	
	//inside a file
	ifstream inhorizonnum;
	inhorizonnum. open("horizonnum.txt");
	
	int SIZE = 9;
	int hrznArry[SIZE];
	int sum = 0;

	
	for(int x = 0;x < SIZE;x++)
	{
		inhorizonnum >> hrznArry[x];
		sum = sum + hrznArry[x];
		cout << hrznArry[x]<< "  "<< endl;
	}
	
	inhorizonnum. close();
	
	//inputing the sum in side the file	ofstream ophorizonnum;
	ofstream ophorizonnum2;
	ophorizonnum2. open("horizonnum.txt");
	
	ophorizonnum2 << "2 3 4 9 6 9 7 22 19 " << endl;
	ophorizonnum2 << "the sum of all the number is = "<< sum << endl;
	
	ophorizonnum2. close();
	
	_getch();
	return 0;
}


7,
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
	int totalEachCol[COLSIZE];
	int sumRow = 0;
	int sumCol = 0;
	int tCol = 0;
	
	
	
	for(int r = 0;r < ROWSIZE;r++)
	{
		for(int c = 0;c < COLSIZE;c++)
		{
			inFile2DArry >> a2DArry[r][c];
			cout <<a2DArry[r][c] << "\t";
			
		}
		cout<<endl;
		sumCol = sumCol + a2DArry[r][0];
	}
	for(int c = 0;c < COLSIZE;c++)
	{
		sumRow = sumRow + a2DArry[0][c];
	}
	
	cout << " " << endl;
	cout << "total for each colunm " << endl;
	for(int a = 0;a < COLSIZE;a++)
	{
		sumCol = 0;
		for(int r = 0;r < ROWSIZE;r++)
		{
			sumCol = sumCol + a2DArry[r][tCol];
		}
		tCol++;
		totalEachCol[a] = sumCol;
		
		cout << totalEachCol[a] << "\t";
		sumCol = 0;
	}
	cout << " " << endl;
	cout << "the sum of all the number in  row 1 = "<< sumRow << endl;
	cout << "the sum of all the number in  colunm 1 = "<< sumCol << endl;
	
	inFile2DArry. close();
	
	_getch();
	return 0;
}


8,
/*opening a file with string and numbers*/

#include "iostream"
#include "conio.h"
#include "fstream"
#include "string"
#include "cstring"

using namespace std;

int main()
{
	ofstream opnumString;
	opnumString. open("numString.txt");
	
	opnumString << "car  R150.52 \n"
				<< "house R152.12 \n"
				<< "rent R300.32 \n"
				<< "food  R400.99";
				
	opnumString.close();


	ifstream innumString;
	innumString. open("numString.txt");
	
	double amount;
	string opject;
	char crncy;
	double sum = 0;
	
	innumString >> opject >> crncy >> amount;
	do
	{
		cout << opject <<"\t"<< crncy << amount << endl;
		
		sum = sum + amount;
		
	}while(innumString >> opject >> crncy >> amount);
	
	cout << "the total amount = " << sum << endl;
	
	_getch();
	return 0;
}


9,
/*opennning and adding a colunme in a file*/
#include "iostream"
#include "fstream"
#include "conio.h"
#include "string"
#include "cstring"

using namespace std;

int main()
{
	
	ofstream opintaddcolum;
	opintaddcolum. open("intaddcolum.txt");
	
	cout << "please enter ID, name, and amount" << endl;
	cout << "press ctrl z to exit" << endl;
	
	int IDnum;
	string name;
	double amount;
	
	while(cin >> IDnum >> name >> amount)
	{
		opintaddcolum << IDnum << "\t" << name << "\t" << amount << endl;
	}
	
 	if(opintaddcolum.fail())
	{
		cout << "file not created " << endl;
		exit(1);
	}
	else
		cout << "file created " << endl;
	
	opintaddcolum.close();
	
	// calculeting
	ifstream infileintaddcolum;
	infileintaddcolum. open("intaddcolum.txt");
	
	double dscunt = 0.1;
	double dscuntAmo;
	double tatalAmoEch;
	
	infileintaddcolum >> IDnum >> name >> amount;
	
	do
	{
		dscuntAmo = amount * dscunt;
		tatalAmoEch = amount - dscuntAmo;
		cout << IDnum << "\t" << name << "\t" << amount << "\t" << dscuntAmo << "\t" << tatalAmoEch << endl;
		//opintaddcolum << IDnum << "\t" << name << "\t" << amount << "\t" << dscuntAmo << "\t" << tatalAmoEch << endl;
		
	}while(infileintaddcolum >> IDnum >> name >> amount);
	
	infileintaddcolum. close();
	
	// adding colunms
	ofstream opintaddcolum2;
	opintaddcolum2. open("intaddcolum.txt");
	
	do
	{
		opintaddcolum2 << IDnum << "\t" << name << "\t" << amount << "\t" << dscuntAmo << "\t" << tatalAmoEch << endl;
		
	}while(opintaddcolum2 << IDnum << name << amount << dscuntAmo << tatalAmoEch);
	
	if(opintaddcolum2.fail())
	{
		cout << "file not updated" << endl;
		exit(1);
	}
	else
		cout << "file not updated" << endl;
	
	opintaddcolum2. close();

	_getch();
	return 0;
}


/*classes and objects 

declering a class and using it in the main functon
and also using functions in side the class */

1,
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

2
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
3,

#include "iostream"
#include "conio.h"
#include "string"
#include "cstring"

using namespace std;

int main()
{
	string userlist;
	string IDnum;
	string name;
	string amount;
	
	cout << "please enter user ID, name, amount: " << endl;
	getline(cin,userlist);
	
	do
	{
		IDnum = userlist.substr(0,userlist.find(" "));
		userlist.erase(0,userlist.find(" ") + 1);
		
		name = userlist.substr(0,userlist.find(" "));
		userlist.erase(0,userlist.find(" ") + 1);
		
		amount = userlist.substr(0,userlist.find(" "));
		userlist.erase(0,userlist.find(" ") + 1);
		
	}while(userlist == "\n");
	
	cout << endl;
	
	cout << IDnum << endl;
	cout << name << endl;
	cout << amount << endl;
	
	_getch();
	return 0;
}


4,
/*using classes and functios on eg 3*/

#include "iostream"
#include "conio.h"
#include "string"
#include "cstring"

using namespace std;

class manipStringclass
{
	private:
		string userlist;
		string IDnum;
		string name;
		string amount;
		
	public:
		manipStringclass()
		{
			IDnum = userlist.substr(0,userlist.find(" "));
			userlist.erase(0,userlist.find(" ") + 1);
		
			name = userlist.substr(0,userlist.find(" "));
			userlist.erase(0,userlist.find(" ") + 1);
		
			amount = userlist.substr(0,userlist.find(" "));
			userlist.erase(0,userlist.find(" ") + 1);
				
		}
		
	
};

int main()
{
	string userlist;
	string IDnum;
	string name;
	string amount;
	
	cout << "please enter user ID, name, amount: " << endl;
	getline(cin,userlist);
	
	do
	{
		manipStringclass manipStringobj; 
		
	}while(userlist == "\n");
	
	cout << endl;
	
	cout << IDnum << endl;
	cout << name << endl;
	cout << amount << endl;
	
	_getch();
	return 0;
}

5,
/*using arreys to manip a string*/

#include "iostream"
#include "conio.h"
#include "string"

using namespace std;

int main()
{
	const int SIZE = 5;
	string IDnum[SIZE];
	string name[SIZE];
	string amount[SIZE];
	string userList;
	int i = 0;
	
	userList << "10001 kagiso 852 \n"


	do
	{
		do
		{
			IDnum[i] = userList.substr(0,userList.find(" "));
						  userList.erase(userList.find(" ")+1);
			
			name[i] = userList.substr(0,userList.find(" "));
						 userList.erase(userList.find(" ")+1);
						 
			amount[i] = userList.substr(0,userList.find(" "));
						   userList.erase(userList.find(" ")+1);
			
			
		}while(userList == "\n");
		
		cout << IDnum[i] << "\t" << name[i] << "\t" << amount[i] << endl;
		
		i++;
		
	}while(userList != "\0");
	
	_getch();
	return 0;
}

6,
/*using cstrings to manip*/

#include "iostream"
#include "conio.h"
#include "string"
#include "cstring"

using namespace std;

int main()
{
	string userlist;
	string IDnum;
	string name;
	string amount;
	const int SIZE = 50;
	char sringArry[SIZE];
	
	cout << "please enter user ID, name, amount: " << endl;
	getline(cin,userlist);
	
	for(int i = 0;i < SIZE;i++)
	{
		sringArry[i] = userlist.c_str();
		
		cout << endl;
		cout << sringArry[i];
	}
	
	_getch();
	return 0;
}


7,
/*using cstring functions */

/*using cstrings to manip*/

#include "iostream"
#include "conio.h"
#include "string"
#include "cstring"

using namespace std;

int main()
{
	char userlist;
	string IDnum;
	string name;
	string amount;
	int i = 0;
	const int SIZE = 20;
	//char sringArry[SIZE];
	char sringArry2[SIZE];
	char *strPoint;
	
	cout << "please enter user ID, name, amount: " << endl;
	sringArry = cin.get();
	
	strPoint = new char sringArry[strlen(sringArry)]
	
	strcpy(sringArry2,sringArry);
	
	cout << sringArry2 << endl;
	
	
	_getch();
	return 0;
}


8
/*using pointers to do a dynamic arrey*/
/*using cstrings to manip*/

#include "iostream"
#include "conio.h"
#include "string"
#include "cstring"
#include "new"

using namespace std;

int main()
{
	char userlist;
	
	cout << "enter ID, name and amount of the user " << endl;
	userlist = cin.get();
	
	char *listPoint = new char[strlen(userlist) + 1];
	
	
	_getch();
	return 0;
}


//testing pointers

#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	const int SIZE = 5;
	int num1 = 4;
	int num2 = 5;
	
	int numArry[] = {1,7,6,2,6};
	int *num1Pointer;
	int *num2Pointer;
	int *sumpointer;
	int *arryPointer;
	int sum;
	
	arryPointer = numArry;// when equeting a pointer to an arrey
    num1Pointer = &num1;
	num2Pointer = &num2;
	
	sum = num1 + num2;
	sumpointer = &sum;// the empacent (&)sing is a mast
	
	cout << num1Pointer << endl; 
	cout << *num1Pointer << endl;
	cout << sumpointer << endl;   
	// the pointer is called to show the value not the addres
	cout << *sumpointer << endl;
	cout << sum << endl;
	
	// using pointer notation to print the 3 element
	arryPointer = numArry + 2;
	cout << *arryPointer << endl;
	
	for(int x = 0;x < SIZE;x++)
	{
		*(arryPointer + x) = *(arryPointer + x) * 2;
		
		cout << *(arryPointer + x);
	}
	
	_getch();
	return 0;
}

// 2D Arrys test with functions

#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	const int CSIZE = 3;
	const int RSIZE = 5;
	const int TSIZE = 5;
	
	int Arry1[RSIZE] = {1,2,3,4,5};
	int Arry2[RSIZE] = {4,5,6,8,7};
	int Arry2D[RSIZE][CSIZE];
	
	cout << "index \t" << "num \t" << "product" << endl;
	
	for(int r = 0;r < RSIZE;r++)
	{
		for(int c = 0;c < CSIZE;c++)
		{
			
			if(c == 0)
			{
				Arry2D[r][c] = Arry1[r];
			}
			if(c == 1)
			{
				Arry2D[r][c] = Arry2[r];
			}
			if(c == 2)
			{
				Arry2D[r][c] = Arry2[r] * Arry1[r];
			}
			
			cout << Arry2D[r][c] << "\t";
		}
		cout <<endl;
	}
	
	
	_getch();
	return 0;
}

//question from weekly assing 1
//question 2

(i) double *fPtr1,*fPtr2;
(ii) fPtr2 = &salary;
(iii) fPtr1 = &increase;
(iv) cout << fPtr1 << endl;
(v) cout << *fPtr2 << endl;
(vi) if(salary > 4200.00)
	 {
		 *fPtr2 * (1 + *fPtr1)
	 }



//question from weekly assing 3
//question 2

while(lineFromfile.find(',') != string::npos)
{
	name = lineFromfile.substr(0,lineFromfile.find(','));
			string[0];
			lineFromfile.erase(0,lineFromfile.find(',')+1);
	
	surname = lineFromfile.substr(0,lineFromfile.fine(','));
			string[1];
				lineFromfile.erase(0,lineFromfile.find(',')+1)
				
	email = lineFromfile.substr(0,lineFromfile.find(','));
			string[2];
			lineFromfile.erase(0,lineFromfile.find(',')+1);
			
	Age = lineFromfile.substr(0,lineFromfile.find(','));
			string[3];
			lineFromfile.erase(0,lineFromfile.find(',')+1);
	
	StudentNumber = lineFromfile.substr(0,lineFromfile.find(','));
					string[4];
					lineFromfile.erase(0,lineFromfile.find(',')+1);
					
}

// in the main function

ifstream inFile("Data.txt");

getline(inFile,firstStudent);
getline(inFile,firstStudent);

while(lineFromfile.find(',') !- string::npos)






