// Given an array A[ ] of positive integers of size N, where each value
// represents the number of chocolates in a packet. Each packet can have
// a variable number of chocolates. There are M students, the task is to
// distribute chocolate packets among M students such that :
// 1. Each student gets exactly one packet.
// 2. The difference between maximum number of chocolates given to a student
// and minimum number of chocolates given to a student is minimum.

// Example 1:
// Input:
// N = 8, M = 5
// A = {3, 4, 1, 9, 56, 7, 9, 12}
// Output: 6
// Explanation: The minimum difference between 
// maximum chocolates and minimum chocolates 
// is 9 - 3 = 6 by choosing following M packets :
// {3, 4, 9, 7, 9}.
// Example 2:

// Input:
// N = 7, M = 3
// A = {7, 3, 2, 4, 9, 12, 56}
// Output: 2
// Explanation: The minimum difference between
// maximum chocolates and minimum chocolates
// is 4 - 2 = 2 by choosing following M packets :
// {3, 2, 4}.
// Your Task:
// You don't need to take any input or print anything. Your task is to
// complete the function findMinDiff() which takes array A[ ], N and M as
// input parameters and returns the minimum possible difference between
// maximum number of chocolates given to a student and minimum number of
// chocolates given to a student.

// Expected Time Complexity: O(N*Log(N))
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 105
// 1 ≤ Ai ≤ 109
// 1 ≤ M ≤ N


// for this problem I can think only one method 
// first sort it and after that u can  run pointer left to right and findout
// minimum difference

#include <bits/stdc++.h>
using namespace std;
// method 1 is using insertion sort 
void insertionSort(int arr[], int size){
    for(int i = 1; i <size; i++){
        int j = i; 
        while(j>0 && arr[j] < arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
    for(int i= 0; i<size; i++) cout<< arr[i] <<" ";
    cout<<endl;
    // time complexity = O(N^2)
    // stable algorithum;
}
// now let's use method 
int method1(int arr[], int size, int m){
    
    insertionSort(arr, size);

    int minDiff = arr[size-1] - arr[0];
    int checker;
    
    for(int i= 0; i<size-m+1; i++){
        checker = arr[i+m-1] - arr[i];
        minDiff = min (checker, minDiff);
    }

    return minDiff;
}

// I think we can use different algos for sorting 
// merge sort   quick sort  heapify
int main(){
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int m = 5;
    int w1 = method1( arr, size, m);
    cout<< w1<<endl;

    return 0;
}