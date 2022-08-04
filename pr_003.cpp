#include <iostream>
using namespace std;

// find kth small or largest number in array for this we use quick selecl
// or partition method
// if we want to find kth largest number then it is in sorted array 
// at k-1 index. and if we want to find kth smallest number then it is
// in sorted array at size-k-1 th index .

// in this algo we do the partition at the index that we want to find
// the index if both index are same then we find the element otherwise
// we do again and again this process until the both index are the same
// and the element at this index is our answer

int quickSelect(int arr[], int size, int index ){
    int j;
    while(true){
        j = -1; // this will track the small elements at the end
        int pivot = arr[index]; // now we made at pivot at the index element
        int i=0;
        while(i<size){
            if (arr[i] < pivot){
                j = j+1;
                swap(arr[i], arr[j]);
            }
            i = i+ 1;
            
        }
        // now all the small element of this  this array are left side from

        if(j+1<index) swap(arr[j+1],arr[index]);
        
        if ((j+1) == index) break;
    }
    return arr[j+1];
}
int main(){
    int arr[] = {7, 10, 4,3, 20, 15};
    // we found the 3rd smallest number in this array
    // okay we find out 2 index in sorted array;
    int ans = quickSelect(arr, 6, 2);
    cout<< ans<<endl; 
}