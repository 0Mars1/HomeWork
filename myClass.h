#ifndef STUDENT_H // Include guard to prevent multiple inclusions
#define STUDENT_H
using namespace std;

class Student
{
public: // Access Specifier

    string grade, subjects[5];
    int total = 0, marks[5];
    float percentage;
    int highest = 0, lowest = 100, highestIndex = 0, lowestIndex = 0;

    Student();

    void calculateHighestLowest();
    void display();
};

#endif // STUDENT_H
