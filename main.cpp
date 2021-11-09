// Major Assignment 1 - 20%
//ALL WORK MUST BE YOUR OWN , IF FOUND COPYING CODE FROM OTHERS OR ONLINE YOU WILL RECEIVE 0% FOR YOUR GRADE
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>

using namespace std;

void printMenu();

void printListValue(vector<int> vector);

void addValue (vector <int> &vector);

void getMean(vector <int> vector);

void getSmallestNumber (vector <int> vector);

void getLargestNumber (vector <int> vector);

void getLocation (vector <int> vectors);

void clear(vector <int> &vector);

void noDuplicate (vector <int> &vector);


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

void printMenu()
{
    cout << "------------------------- Menu -------------------------" << endl;
    cout << "Option \t Meaning" << endl;
    cout << "P -\t Print numbers" << endl;
    cout << "A -\t Add a number" << endl;
    cout << "D -\t Avoid Duplicate Insertion" << endl;
    cout << "M -\t Display mean of the numbers" << endl;
    cout << "S -\t Display the smallest number" << endl;
    cout << "L -\t Display the largest number" << endl;
    cout << "F -\t Display the Location and repeat number" << endl;
    cout << "C -\t Clear Values Of List" << endl;
    cout << "Q -\t Quit" << endl;
    cout << "*******************************************************" << endl;
}

void printListValue(vector<int> vector)
{
    cout << "[";
    for (int i = 0; i < vector.size(); ++i)
    {
        if ((vector.size() - 1) == i)
        {
            cout << vector.at(i) << "";
        }
        else
        {
            cout << vector.at(i) << ", ";
        }
    }
    cout << "]";
    if (vector.empty())
    {
        cout << " - the List is empty ";
    }
    cout << endl;
}

void addValue (vector <int> &vector)
{
    int value;
    cout << "Enter any value to Add in List:";
    cin >> value;
    vector.push_back(value);
    cout << value << " added Successful" << endl;
}


void getMean(vector <int> vector)
{
    if (vector.empty())
    {
        cout << "Unable to calculate the mean - no data" << endl;
    }
    else
    {
        int sum {0};
        for (int value: vector)
        {
            sum += value;
        }
        cout << "Mean or Average of the list is: " << (double) sum/ (double) vector.size() << endl;
    }
}


void getSmallestNumber (vector <int> vector)
{
    if (vector.empty())
    {
        cout << "Unable to determine the smallest number - list is empty" << endl;
    }
    else
    {
        int smallestNumber = vector.at(0);
        for (int value : vector)
        {
            if (smallestNumber > value)
            {
                smallestNumber = value;
            }
        }
        cout << "The smallest number is " << smallestNumber << endl;
    }
}


void getLargestNumber (vector <int> vector)
{
    if (vector.empty())
    {
        cout << "Unable to determine the largest number - list is empty" << endl;
    }
    else
    {
        int largestNumber = vector.at(0);
        for (int value : vector)
        {
            if (largestNumber < value)
            {
                largestNumber = value;
            }
        }
        cout << "The largest number is " << largestNumber << endl;
    }
}

void getLocation (vector <int> vectors)
{
    if (vectors.empty())
    {
        cout << "Unable to find the number - list is empty" << endl;
    }
    else
    {
        int value;
        cout << "Enter value to find:";
        cin >> value;
        vector <int> location;
        int count {0};
        for (int i = 0; i < vectors.size(); ++i)
        {
            if (vectors.at(i) == value)
            {
                location.push_back(i + 1);
                count += 1;
            }
        }
        if (count > 0)
        {
            cout << "Number " << value << " is found for " << count << " time at following Location(s) ";
            printListValue(location);
        }
        else
        {
            cout << "Value " << value << " Not found in list" << endl;
        }
    }
}



void clear(vector <int> &vector)
{
    vector.clear();
    cout << "List Cleared" << endl;
}

void noDuplicate (vector <int> &vector)
{
    int value;
    bool found {false};
    cout << "Enter any value to Add in List:";
    cin >> value;
    for (int i = 0; i < vector.size(); ++i)
    {
        if (vector.at(i) == value)
        {
            cout << "Value Found at " << i + 1 << " Location" << endl;
            found = true;
        }
    }
    if (!found)
    {
        vector.push_back(value);
        cout << "Item Added Successfully " << endl;
    }
}
