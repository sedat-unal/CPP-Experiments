#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(int arraySize, int myArray[])
{
    int sum = 0;
    for (int i = 0; i < arraySize; i++)
    {
        sum = sum + myArray[i];
    }
    return sum;
}


int main()
{
    // get array size
    int arraySize = 0;
    cin >> arraySize;

    // create array
    int myArray[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cin >> myArray[i];
    }

    int result = simpleArraySum(arraySize, myArray);
    cout << result;

    EXIT_SUCCESS;    
}