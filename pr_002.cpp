#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,5,6,8,9};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int max =arr[0];
    int min =arr[0];
    for (int i= 0; i<size; ++i){
        if(max<arr[i]) max= arr[i];
        if(min>arr[i]) min= arr[i];
    }
    cout<<max<< " "<<min;
}