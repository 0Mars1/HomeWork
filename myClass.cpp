#include <iostream>
#include "Student.h"
using namespace std;
Student::Student()  // Constructor definition
{
    highest = 0;
    lowest = 100;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name of Subject number " << i + 1 << ": ";
        cin >> subjects[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Marks of " << subjects[i] << ": ";
        cin >> marks[i];

        while (marks[i] < 0 || marks[i] > 100)
        {
            cout << "Invalid marks! Enter again (0-100): ";
            cin >> marks[i];
        }
        total += marks[i];
    }

    percentage = (float)total / 5;
    calculateHighestLowest();
}

void Student::calculateHighestLowest()
{
    lowest = marks[0];
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
            highestIndex = i;
        }

        if (marks[i] < lowest)
        {
            lowest = marks[i];
            lowestIndex = i;
        }
    }
}

void Student::display()  // Function definition
{
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Highest marks: " << highest << " in " << subjects[highestIndex] << endl;
    cout << "Lowest marks: " << lowest << " in " << subjects[lowestIndex] << endl;
}
myClass.cpp
Displaying main.cpp.
