// Given an array arr of size n and an integer X. Find if there's a triplet in the array
// which sums up to the given integer X.

// Example 1:
// Input:
// n = 6, X = 13
// arr[] = [1 4 45 6 10 8]
// Output:
// 1
// Explanation:
// The triplet {1, 4, 8} in 
// the array sums up to 13.
// Example 2:

// Input:
// n = 5, X = 10
// arr[] = [1 2 4 3 6]
// Output:
// 1
// Explanation:
// The triplet {1, 3, 6} in 
// the array sums up to 10.

// Your Task:
// You don't need to read input or print anything. Your task is to
// complete the function find3Numbers() which takes the array arr[],
// the size of the array (n) and the sum (X) as inputs and returns True
// if there exists a triplet in the array arr[] which sums up to X and
// False otherwise.


// Expected Time Complexity: O(n2)
// Expected Auxiliary Space: O(1)


// Constraints:
// 1 ≤ n ≤ 103
// 1 ≤ A[i] ≤ 105

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i= 1; i<size; i++){
        int j = i-1;
        // [1 4 45 6 10 8]
        while(j>=0 && arr[j]> arr[i]){
            swap(arr[j], arr[j+1]); 
            j--;
        }
    }
}

int triplet(int arr[], int size, int x){
    insertionSort(arr, size);

    for(int i=0; i<size-2; i++){
        int j=i+1, k = size-1;
        while(j<k){
            if((x-arr[i] ) > arr[j] + arr[k]) j++;
            if((x-arr[i] ) < arr[j] + arr[k]) k--;
            else return 1;
        }
    }
    return 0;
}

int main(){
    int arr[] = {1, 4, 45, 6, 10, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<  triplet(arr, size, 12);
   
    return 0;
}