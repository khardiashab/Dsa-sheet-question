#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k){

    sort(arr, arr+ n);
    int ans = arr[n-1] - arr[0];
    // maximum possible height difference is in between smallest and largest

    int tempmax, tempmin;
    tempmin = arr[0];
    tempmax = arr[n-1];

    for(int i = 1; i< n; i++) {
        if(arr[i] -k <0) // if on subtraction k we got negatvie number we will continue
        continue;
        tempmin = min(arr[0] + k, arr[i] -k);
        // in above line minimum element when we add k to the whole array

        tempmax = max( arr[n-1] + k, arr[i] -k ); 
        // maximum element we subtract k from the whole array
    }
    ans = min(ans, tempmax - tempmin);
    return ans;
}

int main(){
     int k = 6, n = 6;
     int arr[n] = { 7, 4, 8,8,8, 9 };
     int ans = getMinDiff(arr, n, k);
     cout<< ans;
}