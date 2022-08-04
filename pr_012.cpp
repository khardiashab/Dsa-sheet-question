#include <iostream>
using namespace std;

void insert(int arr[], int e){
    // we insert arr[0] at the right place
    int i =1;
    while(i<= e){
        if (arr[i-1] > arr[i]) {
            swap(arr[i-1], arr[i]);
            i++;
        }
        else break;
    }
}
void merge(int a[], int n, int b[], int m){
    // we compare each element to a  and compare with b[0] 
    for(int i =0; i<n; i++){
        if (a[i] > b[0]){
            swap(a[i], b[0]);
            insert(b, m-1);
        }
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
    merge(arr1,n,arr2,m);
    for(int i= 0; i< n; i++) cout<< arr1[i]<< " ";
    cout<<endl;
    for(int i= 0; i< m; i++) cout<< arr2[i]<< " ";
    cout<<endl;
}