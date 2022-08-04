// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.
 

// Constraints:

// 1 <= prices.length <= 105
// 0 <= prices[i] <= 104
#include <bits/stdc++.h>
using namespace std;

int _merge(int arr[], int s, int mid, int e){
    // in this problem we use merge sort with different comparision
    // we sort the array in non increasing order for this we change the 
    // comparision symbol
    int n1, n2, ls[n1], rs[n2], l, r, m;
    n1 = mid - s +1;
    n2  = e - mid;

    for(int i =0; i<n1; i++) ls[i] = arr[s + i]; 
    for(int i =0; i<n2; i++) rs[i] = arr[mid +1 + i]; 

    l = r =0; m = s;
    int profit = 0, checking_profit = 0;
    while(l<n1 && r<n2){
        if(ls[l] > rs[r]){
            checking_profit = ls[n1-1] - rs[r];
            cout<<"cp: " <<checking_profit<<endl;
            arr[m++] = rs[r++];
        }
        else arr[m++] = ls[l++];
        if(profit < checking_profit)  profit = checking_profit;
    }
    while(l< n1) arr[m++] = ls[l++];
    while(l< n2) arr[m++] = rs[r++];

    return profit;

}
int _mergeshort(int arr[], int s, int e){
    int profit = 0, profit1;
    if(s<e){
        int mid = (e -s)/2 ;
        profit1 = _mergeshort(arr, s, mid);
        if(profit < profit1) profit = profit1;
        profit1 = _mergeshort(arr, mid +1, e) ;
        if(profit < profit1) profit = profit1;
        profit1 = _merge(arr, s, mid, e);
        if(profit < profit1) profit = profit1;
    }
    return profit;
}
int main(){
   // body part
    int arr[6] = {7,1,5,3,6,4};
    for(int i =0; i<6; i++) cout<< arr[i]<<" ";
    int profit = _mergeshort(arr, 0, 5);
    cout<<profit<<endl;
    return 0;
}