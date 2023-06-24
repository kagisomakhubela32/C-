weekly assingment 3

Question 1

#include <string>
#include <iostream>
#include <conio.h>
#include <sstream>
#include <string>
#include "infostation.h"
#include <iomanip>
#include <ctime>
#include <cstdlib>
//#include <QCoreApplication> MUST RETURN TO LINE 1 after running!!!!!!!!!
 //   QCoreApplication a(argc, argv);  MUST RETURN TO LINE 21 after running!!!!!!!!!



using namespace std;

 
void  calcPower(float pWData[10][4])
{
	for (int i = 0; i < 10; i++)
	{
		pWData[i][3] = (pWData[i][0] / 2.0)*pWData[i][1];
		cout << "Power for column " << i + 1 << pWData[i][3] << endl;
	}
}

int main(int argc, char *argv[])
{
	
	InfoStation info;
	srand(time(NULL)); //seeding

	
    /* You have been provided with a QTCreator project called Project12_Student. Open the project in QTCreator and make the necessary changes to the main.cpp and infostation.cpp/h files.
     *
     *
     * The class InfoStation contains 3 public methods namely:
     *
     * float getTemp(); - Returns a random temperature between 1 and 100 (In float format)
     * float getHour(); - Returns a random hour between 1 and 24 (In float format)
     * string getDay(); - Returns a random day between 1 and 10 (In string format)
     *
     * Using the class InfoStation fill the provided multidimensional array named WData[10][4] with values in the main function.
     *
     * The first 3 columns in WData should contain a temperature a hour and a day generated using the InfoStation class.
     *
     * Column 1 - temperature retrieved using getTemp() from the InfoStation class.
     * Column 2 - hour retrieved using getHour() from the InfoStation class.
     * Column 3 - day retrieved using getDay() from the InfoStation class.
     * Column 4 - no value at this stage will be calculated by calcPower(...)
     *
     *This should be repeated for each of the 10 rows.
     *
    */
	

	float WData[10][4] = {0}; //Provided

	// partially filling the array
   for (int i = 0; i < 10; i++)
   {
	   WData[i][0] = info.getTemp();
	   WData[i][1] = info.getHour();
	   WData[i][2] = info.getDay();
   }

   //displaying partially filled array
   cout <<"Output example before the power function is created\n"<< "TEMP\t\t" << "HOUR\t\t" << "DAY\t\t" << "POWER\n";
   for (int i = 0; i < 10; i++)
   {
	   for (int j = 0; j < 4; j++)
	   {
		   cout << WData[i][j] << "\t\t";
	   }
	   cout << endl;
   }
   cout << endl << endl;


   //After populating the multidimensional array with values create and call the function calcPower(...).

   for (int i = 0; i < 10; i++)
	   WData[i][3] = info.getTemp();

   cout << "Final Output example\n" << "TEMP\t\t" << "HOUR\t\t" << "DAY\t\t" << "POWER\n";
   for (int i = 0; i < 10; i++)
   {
	   for (int j = 0; j < 4; j++)
	   {
		   cout << WData[i][j] << "\t\t";
	   }
	   cout << endl;
   }
   cout << endl << endl;

 
   //The calcPower(...) function will receive the array WData as parameter and calculate the solar power that would have been produced on the day.
   //The solar power value is calculated by multiplying the days temprature with the the (hour /2)
   //The calculated value should be stored in the 4th coloum of WData.


   //See screenshot below for an example showing the fully calculated array. (You do not have to output any values when writing your code)
   //The below screenshot is just an example.

    //return a.exec();   is the original last statement
   cin.get();  //must be removed after !!!!!!!!!!!
   _getch();
   return 0;  //must be removed after!!!!!!!!!!!!
}

Question 2

#include <string>
#include <iostream>
#include <conio.h>
#include <cctype>
#include <fstream>

using namespace std;

void splitSingleStudent(string stdentDetAr[], string lineFromFile)
{
	char sep = ',';//provided 

	stdentDetAr[1] = lineFromFile.substr(0, lineFromFile.find(sep));
	lineFromFile = lineFromFile.erase(0, lineFromFile.find(sep) + 1);

	stdentDetAr[2] = lineFromFile.substr(0, lineFromFile.find(sep));
	lineFromFile = lineFromFile.erase(0, lineFromFile.find(sep) + 1);

	stdentDetAr[3] = lineFromFile.substr(0, lineFromFile.find(sep));
	lineFromFile = lineFromFile.erase(0, lineFromFile.find(sep) + 1);

	stdentDetAr[4] = lineFromFile.substr(0, lineFromFile.find(sep));
}

int main()
{
	string stdentDetAr[5] = {};// provided
	string firstStudent = "";// provided
	int count = 1; 
	bool found = true;

	ifstream inFile("Data.txt");
	while (getline(inFile, firstStudent) && found)
	{
		if (count == 2)
		{
			splitSingleStudent(stdentDetAr, firstStudent);
			found = false;
		}
		count++;
	}
	inFile.close();
	
	_getch();
	return 0;
}
																																