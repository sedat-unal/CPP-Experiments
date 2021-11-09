#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(vector<int>& candles)
{ 
    // sort whole array begin till ends
    sort(candles.begin(), candles.end());

    // define the values
    int count = 0;
    // the index is always whole array size -1 because in while loop travese the array
    int index = candles.size() - 1;
    // the tallest define the arrays index
    int tallest = candles[index];

    // (başlangıçta dizinin eleman sayısı -1 sayısını en uzun olarak tanımlıyoruz. bu devam ettiği sürece index i azaltarak bütün diziyi geziyoruz aynı bulduğu eleman kadar count değerini arttırıyor)
    while (tallest == candles[index])
    {
        count++;
        index--;
    }
        
    return count;
}

int main()
{
    // get array size
    int arraySize = 0;
    cin >> arraySize;

    // get array elements
    vector<int> candles(arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        cin >> candles[i];
    }
        
    int result = birthdayCakeCandles(candles);
    cout << result;

    EXIT_SUCCESS;
}