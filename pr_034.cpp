// Given a Integer array A[] of n elements. Your task is to complete 
//the function PalinArray. Which will return 1 if all the elements of
// the Array are palindrome otherwise it will return 0.

// Example:
// Input:
// 2
// 5
// 111 222 333 444 555
// 3
// 121 131 20

// Output:
// 1
// 0

// Explanation:
// For First test case.
// n=5;
// A[0] = 111    //which is a palindrome number.
// A[1] = 222   //which is a palindrome number.
// A[2] = 333   //which is a palindrome number.
// A[3] = 444  //which is a palindrome number.
// A[4] = 555  //which is a palindrome number.
// As all numbers are palindrome so This will return 1.

// Constraints:
// 1 <=T<= 50
// 1 <=n<= 20
// 1 <=A[]<= 10000

#include <bits/stdc++.h>
using namespace std;

int plaindrome(string s){
    int size = s.size();
    for(int i= 0; i<size/2; i++){
        if(s[i]!= s[size-1-i]){
            return 0;
        }
    }
    return 1;
}

int method(int arr[], int size){
    for(int i = 0; i<size; i++){
        string s = to_string(arr[i]);
        int j = plaindrome(s);
        if(j == 0) return 0;
    }
    return 1;
}

int main(){
    int arr[] = {111, 222, 333, 442, 555} ;
    int size = sizeof(arr)/ sizeof(arr[0]);
    int o = method(arr, size);
    cout<< o<< endl;
}