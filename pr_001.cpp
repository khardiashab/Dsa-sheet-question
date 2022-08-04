#include <iostream>
using namespace std;

void reverseArray( int arr[], int s){
    for(int i =0; i<s/2; ++i){
        swap(arr[i], arr[s-1-i]);
    }
}
void display(int arr[], int s){
    for(int i= 0; i<s; ++i) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[5] = {1,5,6,8,9};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int rev_arr[size];
    for(int i= 0; i<size; ++i){
        rev_arr[i] = arr[size-1-i];
    }
    display(arr, 5);
    reverseArray(arr, 5);
    display(arr, 5);
}
