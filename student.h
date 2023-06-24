#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
public:
    Student();

    Student(string lineFromFile); //1

    string getName() ;

    string getSurname();

    string getEmail() ;

    string getAge() ;

    string getStudent_Number();

    void loadStudent(string lineFromFile);

    Student operator>(Student op2); //2


private:
    string Name;
    string Surname;
    string Email;
    string Age;
    string Student_Number;

};

#endif // STUDENT_H
