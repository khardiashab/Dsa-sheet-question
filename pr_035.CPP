// Given an array arr[] of N integers, calculate the median

// Example 1:
// Input: N = 5
// arr[] = 90 100 78 89 67
// Output: 89
// Explanation: After sorting the array 
// middle element is the median 

// Example 2:

// Input: N = 4
// arr[] = 56 67 30 79
// Output: 61
// Explanation: In case of even number of 
// elements, average of two middle elements 
// is the median.

// Your Task:
// You don't need to read or print anything. Your task is to complete
// the function find_median() which takes the array as input parameter
// and returns the floor value of the median.
 

// Expected Time Complexity: O(n * log(n))
// Expected Space Complexity: O(1)
 

// Constraints:
// 1 <= Length of Array <= 100
// 1 <= Elements of Array <= 100

#include <bits/stdc++.h>
using namespace std;

int find_median(int arr[], int size){
    sort(arr, arr+size);
    int median;
    if(size % 2==0){
        median = floor((arr[size/2 -1] + arr[size/2]) / 2.0);
    }
    else median = arr[size/2];

    return median;

}

int main(){
    int arr[] = {56, 67, 30, 79};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int median = find_median(arr, size);
    cout<< median<<endl;
   
    return 0;
}