
#include <iostream>
#include <vector>
#include "HelperFunction.h"

using namespace std;

int main()
{
    vector<int> list;
    char choice;
    bool done {false};
    do
    {
        printMenu();
        cout << "Enter your choice:";
        cin >> choice;
        if (choice == 'p' || choice == 'P')
        {
            printListValue(list);
        }
        else if (choice == 'a' || choice == 'A')
        {
            addValue(list);
        }
        else if (choice == 'm' || choice == 'M')
        {
            getMean(list);
        }
        else if (choice == 's' || choice == 'S')
        {
            getSmallestNumber(list);
        }
        else if (choice == 'l' || choice == 'L')
        {
            getLargestNumber(list);
        }
        else if (choice == 'f' || choice == 'F')
        {
            getLocation(list);
        }
        else if (choice == 'q' || choice == 'Q')
        {
            cout << "Good By";
            done = true;
        }
        else if (choice == 'd' || choice == 'D')
        {
            noDuplicate(list);
        }
        else if (choice == 'c' || choice == 'C')
        {
            clear(list);
        }
        else
        {
            cout << "Unknown Selection Please, Try Again" << endl;
        }
    }
    while (!done);
}


