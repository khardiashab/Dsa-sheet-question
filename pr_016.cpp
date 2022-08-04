// in this exercise we count inversions
// Given an array of integers. Find the Inversion Count in the array. 

// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 

// Example 1:

// Input: N = 5, arr[] = {2, 4, 1, 3, 5}
// Output: 3
// Explanation: The sequence 2, 4, 1, 3, 5 
// has three inversions (2, 1), (4, 1), (4, 3).
// Example 2:

// Input: N = 5
// arr[] = {2, 3, 4, 5, 6}
// Output: 0
// Explanation: As the sequence is already 
// sorted so there is no inversion count.
#include <bits/stdc++.h>
using namespace std;

int countIversion(int arr[], int s, int mid, int e){
    // for this we use merge function of merge sort
    int l_len, r_len;
    int count = 0 ;
    l_len = (mid - s) + 1;
    r_len = e - mid;
    int l_subarray[l_len];
    int r_subarray[r_len];

    // let me copy the data from main array
    for(int i = 0; i< l_len; ++i) l_subarray[i] = arr[s+i];
    for(int i = 0; i< r_len; ++i) r_subarray[i] = arr[mid+1+i];

    // let me merge them 
    // we have three index for left right and main array
    int i, j, k =s;
    i = j =0;
    while( i< l_len && j < r_len){
        if(l_subarray[i] > r_subarray[j]){
            count += l_len - i;
            arr[k++] = r_subarray[j++];
        }
        else arr[k++] = l_subarray[i++];
    }

    while(i < l_len) arr[k++] = l_subarray[i++];
    while(j < r_len) arr[k++] = r_subarray[j++];

    return count;
}


int mergeSort(int arr[], int s, int e){
    int inv_count =0;
    if(s<e){
        int mid = (s+e)/ 2;
       inv_count += mergeSort( arr, s, mid); // left side mergesort
       inv_count += mergeSort(arr, mid + 1, e); // right side mergesort
       inv_count += countIversion(arr, s, mid, e); 
    }
    return inv_count;
}
int main(){
    int arr[] = {2, 4, 1, 3, 5};
    int count = mergeSort(arr, 0, 4);    
   cout<< count;
    return 0;
}