//
// Created by Radhen on 2021-11-09.
//

#ifndef CHALLENGE_HELPERFUNCTION_H
#include <vector>
#define CHALLENGE_HELPERFUNCTION_H

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

#endif //CHALLENGE_HELPERFUNCTION_H
