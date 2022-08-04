// in this we use gap method to merge to array in sorted 
// order
#include <iostream>
#include <math.h>
using namespace std;

void gapMethod(int a[], int n, int b[], int m){
    int totalElements = n+m;
    int gap = ceil((totalElements *1.0/2));
    int i,j;
    while(true){
        i =0; j =i+gap;
        while(j<totalElements){

            if(j< n){
                if(a[i]>a[j]) {
                    swap(a[i],a[j]);
                    {i++; j++;}
                }
                else {i++; j++;}
            }
            if(i<n && j> n-1){
                if(a[i]>b[j-n]) {
                    swap(a[i],b[j-n]);
                    {i++; j++;}
                }
                else {i++; j++;}
            }
            if(i>n-1){
                if(b[i-n]>b[j-n]) {
                    swap(b[i-n],b[j-n]);
                    {i++; j++;}
                }
                else {i++; j++;}
            }
        }
        if (gap==1) break;
        gap = ceil(gap *1.0/2);
    }
}
int main(){
    int arr1[] = {1, 3, 5, 7};
    int n = sizeof(arr1)/ sizeof(arr1[0]);
    int arr2[] = {0, 2, 6, 8, 9};
    int m = sizeof(arr2)/ sizeof(arr1[0]);
    for(int i= 0; i< n; i++) cout<< arr1[i]<< " ";
    cout<<endl;
    for(int i= 0; i< m; i++) cout<< arr2[i]<< " ";
    cout<<endl;
    gapMethod(arr1,4,arr2,5);
    for(int i= 0; i< n; i++) cout<< arr1[i]<< " ";
    cout<<endl;
    for(int i= 0; i< m; i++) cout<< arr2[i]<< " ";
    cout<<endl;
}