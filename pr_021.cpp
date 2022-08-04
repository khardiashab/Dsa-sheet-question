// find if there is any subarray which sum is 0.


// for this I have two ways 
#include <bits/stdc++.h>
using namespace std;

bool brout_force(int arr[], int size){
    // make prefix sum of this array
    for(int i= 1; i<size; i++){
        arr[i] = arr[i] + arr[i-1];
    }

    // now find out which element are repeated in this array
    for(int i= 0; i< size; i++){
        for(int j = j+1; j<size; j++){
            if(arr[i] == arr[j]) return true;
        }
    }

    return false;

    // time complexity = O(n^2)
    // space complexity = O(1)
}

// second method is hashing based data structure unordered maps
bool umap(int arr[], int size){
    unordered_map<int, int> m_arr;
    for(int i= 0; i<size; i++){
        if() // now I don't have clear the concept of unordered mapp
    }
}
int main(){
   // body part
   
    return 0;
}