#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    // get array size
    int gradesCount;
    cin >> gradesCount;

    // get whole array
    int grades[gradesCount];
    for (int i = 0; i < gradesCount; i++)
    {
        cin >> grades[i];
    }
    
    // define the values
    int mod, modFive, sum = 0;
    int resultArray[gradesCount];

    // for given by the user grades count number
    for (int i = 0; i < gradesCount; i++)
    {
        // mod 10 and 5
        mod = grades[i] % 10;
        modFive = mod % 5;

        // öğrencinin puanı yuvarlandığında geçecek seviyeye uygun ise (yani 40) 
        if (grades[i] > 37)
        {
            // yuvarlama kuralı
            if (modFive >= 3)
            {
                int five = 5;
                int result = five - modFive;
                resultArray[i] = grades[i] + result;
                cout << resultArray[i] << endl;
            }
            // yuvarlamaya uygun değilse direkt kendisi
            else
            {
                resultArray[i] = grades[i];
                cout << resultArray[i] << endl;
            }
        }
        // eğer öğrencinin puanı yuvarlamaya gerek kalmadan kalıyorsa direkt kendisi
        else
        {
            resultArray[i] = grades[i];
            cout << resultArray[i] << endl;
        }
    }

    EXIT_SUCCESS;
}