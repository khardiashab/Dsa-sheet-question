 #include <iostream>
 using namespace std;

 void cyclicRotateByOne(int arr[], int size){
    for(int i= size-1; i>0;  --i) swap(arr[i], arr[i-1]);
 }
 int main(){
    int arr[] = {2,3,4,5,1};
    cyclicRotateByOne(arr, 5);
    for(int i=0; i<5; ++i) cout<<arr[i]<<" ";
 }