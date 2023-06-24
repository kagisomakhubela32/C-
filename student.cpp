#include "student.h"
#include <string>
#include <iostream>


using namespace std;

Student::Student()
{

}


Student::Student(string line) //1
{
 loadStudent(line); //2 - If student realized that load student could be used 0 otherwise

 //1 After loading the line set the student number to hidden
 Student_Number = "Hidden";
}



void Student::loadStudent(string lineFromFile)
{
    char sep=',';

    while(lineFromFile.find(sep) != string::npos) //2 - 1 find 1 not npos
    {
        Name = lineFromFile.substr(0,lineFromFile.find(sep)); //2 - Find and erase name
        lineFromFile.erase(0, lineFromFile.find(sep)+1);

        Surname = lineFromFile.substr(0,lineFromFile.find(sep)); //2
        lineFromFile.erase(0, lineFromFile.find(sep)+1);

        Email = lineFromFile.substr(0,lineFromFile.find(sep)); //2
        lineFromFile.erase(0, lineFromFile.find(sep)+1);

        Age = lineFromFile.substr(0,lineFromFile.find(sep)); //2
        lineFromFile.erase(0, lineFromFile.find(sep)+1);
    }

    Student_Number = lineFromFile; //2 - Load last (all remaining)
}


Student Student::operator>(Student op2) //1
{
    if(Age > op2.getAge()) //2
    {
        return *this; //1
    }
    else
    {
        return op2; //1
    }
}


string Student::getName()
{
    return Name;
}

string Student::getSurname()
{
    return Surname;
}


string Student::getEmail()
{
    return Email;
}

string Student::getAge()
{
    return Age;
}

string Student::getStudent_Number()
{
    return Student_Number;
}
