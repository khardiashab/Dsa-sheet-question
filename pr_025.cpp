// Given an array of size n, find all elements in array that appear more
// than n/k times. For example, if the
// input arrays is {3, 1, 2, 2, 1, 2, 3, 3} and k is 4, then the
// output should be [2, 3]. Note that size of array is 8 (or n = 8), so
// we need to find all elements that appear more than 2 (or 8/4) times.
// There are two elements that appear more than two times, 2 and 3.

#include <bits/stdc++.h>
using namespace std;
// there are three way to solve this problem
// first is brute force approach
void traversal(int arr[], int n, int k){
     int a[n/k];
     int x = 0;
     for(int i=0; i<n; i++){
        int count = 1; 
        for(int j =i+1; j<n; j++){
            if(arr[i]== arr[j]) {
                count++;
            }
        }
        if(count >n/k) {
            int flag =0;
            for(int k=0; k<x; k++){
                if(a[k] == arr[i]) flag=1;
            }
            if(flag==0){
                x++;
                a[x-1];          
            }
        }
    }
    for(int i=0; i<x; i++) cout<< a[i]<<" ";
    cout<< endl;
    // time complexity = O(n^2)
    // auxilary space = O(n/k)
}

// second method by sorting 
void bySorting(int arr[], int n, int k){
    sort(arr, arr+n);
    int i = 0;
    cout<< n/k+1<<" hi: \n";
    while(i+n/k<n){
        if(arr[i] == arr[i+n/k] ){
            cout<< arr[i]<<" ";
            i= i+n/k;

            while(arr[i] == arr[i+1] && i<n) ++i;

            ++i;
        }
        else i++;
    }
    // time complexity = O(NlogN + N) = O(NlogN)
    // space complexity = O(N) // for sorting 
}

// using hashing method or unodered map
void hashingMethod(int arr[], int n, int k){
    unordered_map<int, int> umap;
    for(int i= 0; i<n; i++){
        umap[arr[i]]++;
    }

    for(auto &i: umap){
        if(i.second>n/k) cout<<i.first<<" ";
    } 
    
    // time complexity = O(N+N) = O(N)
    // space complexity = O(N)

}

int main(){
    int arr[8] = {3, 1, 2, 2, 2, 2, 2, 2};
    bySorting(arr, 8, 4);
   
    return 0;
}