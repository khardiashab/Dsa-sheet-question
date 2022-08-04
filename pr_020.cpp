// Given an array of positive and negative numbers, arrange them in an//
// alternate fashion such that every positive number is followed by negative
// and vice-versa maintaining the order of appearance.
// Number of positive and negative numbers need not be equal. If there are
// more positive numbers they appear at the end of the array. If there are
// more negative numbers, they too appear in the end of the array.

// Examples :
// Input:  arr[] = {1, 2, 3, -4, -1, 4}
// Output: arr[] = {-4, 1, -1, 2, 3, 4}

// Input:  arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
// output: arr[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0}

#include <bits/stdc++.h>
using namespace std;
int partion(int arr[], int size)
{
    int pivot = 0;
    int j = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            j++;
            swap(arr[i], arr[j]);
        }
    }
    return j; // here j is index of last negitive number
}

void alternative_arrangement(int arr[], int size)
{
    int j = partion(arr, size);

    // now adjust it in alternative way.

    for (int i = 1; i <= j; i = i + 2)
    {
        if (j % 2 == 0)
        {
            if (j + 1 + i < size)
            {
                swap(arr[i], arr[j + 1 + i]);
            }
            else
                break;
        }
        else
        {
            if (j + i < size)
            {
                swap(arr[i], arr[j + 1]);
            }
            else
                break;
        }
    }
}
int main()
{
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    alternative_arrangement(arr, 10);
    for(int i=0; i<10; i++) cout<< arr[i]<<" ";

    return 0;
}