#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//Problem 45 - Count Negative Number in Array

int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(-100, 100);
}
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int CountNegativeNumber(int arr[100], int arrLength)
{
    int NegativeCounter = 0;
    for (int i = 0;i < arrLength;i++)
    {
        if (arr[i] < 0)
            NegativeCounter++;
    }
    return NegativeCounter;
}

int main()
{
    //Problem 45 - Count Negative Number in Array

    srand((unsigned)time(NULL));
    int arr[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);
    cout << "Array: \n";
    PrintArray(arr, arrLength);

    cout << "\nNegative Number Count is: ";
    cout << CountNegativeNumber(arr, arrLength);
}
