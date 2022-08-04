// find the next greater number from 
// Implement the next permutation, which rearranges the list of numbers
// into Lexicographically next greater permutation of list of numbers.
// If such arrangement is not possible, it must be rearranged to the
// lowest possible order i.e. sorted in an ascending order. You
// are given an list of numbers arr[ ] of size N.

// Input: N = 6
// arr = {1, 2, 3, 6, 5, 4}
// Output: {1, 2, 4, 3, 5, 6}
// Explaination: The next permutation of the 
// given array is {1, 2, 4, 3, 5, 6}.

#include <bits/stdc++.h>
using namespace std;

// to solve this problem I starting traversal in the array from right
// find the number which is less then from its right number and swap 
// it just big from this number in the right side number and reverse it
// after the element 

void nextPermutation(int arr[], int size){
    if(size <= 1) return;

    int i = size -2;
    while(arr[i] > arr[i+1] && i>=0){
        i--;
    }
    // cout<< "this is i: "<<i<< endl;
    if(i== -1){
        reverse(arr, arr+size);
        return ;
    }

    // now find just big from arr[i] in right side and swap with arr[i]
    int j = size -1;
    while(arr[j] <= arr[i]){
        j--;
    }
    swap(arr[i], arr[j]);
    reverse(arr+i+1, arr + size);
}
int main(){
   // body part
    int arr[] = {9, 8, 7, 6, 5, 4};
    int size = sizeof(arr)/ sizeof(arr[0]);
    nextPermutation(arr, size);
    for(int i=0; i< size; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
    return 0;
}