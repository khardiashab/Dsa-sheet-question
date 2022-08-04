#include <iostream>
using namespace std;

int jump_count(int arr[], int size){
    int count =0;
    int i =0;
    while(i < size-1){
        if (arr[i] ==0) return -1;
        else {
            i+= arr[i];}
            cout<< i<<" ";
        count++;
    }
    
    cout<< endl;
    return count;
}
int main(){
    int arr[] = {1, 4, 3, 2, 6, 7};
    cout<< jump_count(arr,6)<<endl;
    int a[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout<< jump_count(a,11);
}