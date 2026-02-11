#include "student.h"
#include <iostream>
using namespace std;

Student::Student()
{
    cout << "Student default konstruktori" << endl;
}

Student::Student(string n, int a)
{
    name = n;
    age = a;
}

void Student::setName(const string &newName)
{
    name = newName;
}

void Student::setAge(int newAge)
{
    age = newAge;
}

string Student::getName() const
{
    return name;
}

int Student::getAge() const
{
    return age;
}

void Student::printStudentInfo()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
