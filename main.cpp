#include <QCoreApplication>
#include<string>
#include <iostream>
#include "student.h"
#include <cctype>


using namespace std;






int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   /*
You have been provided with a QTCreator project called Project7_Student. Open the project in QTCreator and make the necessary changes to the main.cpp and student.cpp/h files.

Complete the code for the Student class method called void loadStudent(...) that receives a single string parameter. This string parameter will contain student details in the following format:
'Name','Surname','Email','Age','Student Number'
Write the code to separate the string and assign the correct values to the Student class members. (12)

Create an overloaded > (greater than) operator in the Student class.
The operator will compare the age of two student objects and return the object with the greater age. (7)

In main.cpp create a non member function named isFemale. This function will receive as parameter a pointer to a student object.
If the last two numbers of the student number is valid numbers (Must be between 0 and 9) the function will return true. Otherwise the function will return false. (6)

Overload the default constructor for Student to receive a single string parameter. This string parameter will contain student details in the following format:
'Name','Surname','Email','Age','Student Number'
Write the code to separate the string and assign the correct values to the Student class members the only exception should be the student number.
The student number should be set to the string value "hidden".  (4)

*/

    //You can test your code in the main function but it will not be marked.


    return a.exec();
}



