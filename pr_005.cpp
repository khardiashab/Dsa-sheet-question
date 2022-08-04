#include <iostream>
using namespace std;

void swap1(int & a,int & b){
    int tem;
    tem = a;
    a = b;
    b= tem;
}

void partition(int arr[], int s){
    int i, j;
    i = 0; j= s-1;
    while(i<j){
        while( arr[i]<0){
            i++;
        };
        while(arr[j]>=0){
            j--;
        };
        cout<<i<<" "<<j<<endl;
        swap1(arr[i],arr[j]);
    }
    swap1(arr[i], arr[j]);
}
int main(){
    int arr[] = {2,-1,0,-3,4,6,3,5,-1,-4};
    int s = sizeof(arr)/sizeof(arr[1]);
    for(int i=0; i<s; ++i){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    partition(arr, s);
    for(int i=0; i<s; ++i){
        cout<<arr[i]<< " ";
    }
}