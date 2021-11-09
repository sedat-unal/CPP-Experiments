#include <iostream>
#include <bits/stdc++.h>
#include <string> //string library

using namespace std;

string timeConversion(string time)
{
    // substring am or pm the string
    string sub = time.substr(8, 9);
    // check time string the hour equals 12
    string checkTimeIfBiggerThanTwelve = time.substr(0, 2);

    if (checkTimeIfBiggerThanTwelve == "12")
    {
        // if the times ended with am and hour bigger then 12
        if (sub == "AM")
        {
            // hour convert to 24 hours format
            string oclocks[12] = {"13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "00"};
            string pmOclocks[12] = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12"};
            // for converting substring hour of time
            string subOclock = time.substr(0, 2);
            // define the newTime string for done the proccess
            string newTime;
            // up to size to oclocks and pmOclocks arrays
            for (int i = 0; i < 12; i++)
            {
                // if 
                if (subOclock == pmOclocks[i])
                {
                    string pm = oclocks[i];
                    string restOfSub = time.substr(2, 6);
                    newTime = pm + restOfSub;
                }
            }
            return newTime;
        }
        else
        {
            string subdedTime = time.substr(0, 8);
            return subdedTime;
        }
    }
    else
    {
        if (sub == "PM")
        {
            string oclocks[12] = {"13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "00"};
            string pmOclocks[12] = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12"};

            string subOclock = time.substr(0, 2);
            string newTime;
            for (int i = 0; i < 12; i++)
            {
                if (subOclock == pmOclocks[i])
                {
                    string pm = oclocks[i];
                    string restOfSub = time.substr(2, 6);
                    newTime = pm + restOfSub;
                }
            }
            return newTime;
        }
        else
        {
            string subdedTime = time.substr(0, 8);
            return subdedTime;
        }
    }
}

int main()
{
    // get the string time
    string time;
    getline(cin, time);

    string result = timeConversion(time);
    cout << result;

    EXIT_SUCCESS;
}