// Input: ar1[] = {-5, 3, 6, 12, 15}
//         ar2[] = {-12, -10, -6, -3, 4, 10}
// Output : The median is 3.
// Explanation : The merged array is :
//         ar3[] = {-12, -10, -6, -5 , -3,
//                  3, 4, 6, 10, 12, 15},
//        So the median of the merged array is 3

// Input: ar1[] = {2, 3, 5, 8}
//         ar2[] = {10, 12, 14, 16, 18, 20}
// Output : The median is 11.
// Explanation : The merged array is :
//         ar3[] = {2, 3, 5, 8, 10, 12, 14, 16, 18, 20}
//         if the number of the elements are even, 
//         so there are two middle elements,
//         take the average between the two :
//         (10 + 12) / 2 = 11.

#include <bits/stdc++.h>
using namespace std;

// for this I can think two solution right now 
// frist is to merged both array in one new array and find out the 
// median as last question.
// second method is two use gap method and sort both array in non decreasing
// order

int mergeMedian(int a[], int n, int b[], int m){
    int mergedArray[n+m] ;

    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(a[i] <b[j]) mergedArray[k++] = a[i++];
        else mergedArray[k++] = b[j++];
    }

    while(i<n)  mergedArray[k++] = a[i++];
    while(j<m)  mergedArray[k++] = b[j++];

    int median ;
    if((n+m)%2==0) 
       median = floor((mergedArray[(n+m)/2] + mergedArray[(n+m)/2 -1])/2.0);
    else median = mergedArray[(n+m)/2];

    return  median;
}

// insert an element in a sorted array I insert a element at index 0;
void insert(int arr[], int size){
    int i = 1;
    while(i<size && arr[i-1] > arr[i]){
        swap(arr[i], arr[i-1]);
        i++;
    }
}
int arrangeArray(int a[], int n, int b[], int m){
    for(int i =0; i<n; i++){
        if(b[0] < a[i]){
            swap(b[0], a[i]);
            insert(b, m);
        }
    }
    int s = n+m;
    int median ;
    if(n==m) median = floor((a[n-1] - b[0])/2.0);
    else if(s%2==0)
        {
            if(s/2 >n) {
                median = floor((b[s/2 -1 -n] + b[s/2 -n])/2.0);
            }
            else  median = floor((a[s/2 -1] + a[s/2])/2.0);
        }
    else
        {
            if(s/2 >=n) {
                median = b[s/2 -n];
            }
            else  median = a[s/2];
        }
    
    return median;
}

int main(){
   // body part
   
    return 0;
}