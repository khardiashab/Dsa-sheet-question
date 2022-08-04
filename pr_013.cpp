//kadane's algorithum for finding the maximun sum of a subarray
#include <bits\stdc++.h>
using namespace std;

int kadaneAlgo(int arr[], int size){
    // we have two condition 
    // first we have all negetive numbers 
    // second is we have mix numbers 
    // in the subarray must be one element

    int flag = 0, sum = 0, checking_sum =0;
    // now iterate in the array  and search for first 
    // condition 
    int max = arr[0];
    for(int i =0; i<size; i++){
        if(arr[i] > 0) flag = 1;
        // if any number is greater than zero then we go to
        // to in second condition 
        else max = max(max, arr[i]);
    }

    // now we iterate for second condition 
    for(int i = 0; i<size; i++){
        checking_sum += arr[i];
        if(checking_sum < 0) checking_sum = 0;
        
        else {
            if(sum < checking_sum ) sum = checking_sum;
        }
    }

    // now if we have flag = 0 then it means all memebers are negative
    // numbers so our answer is max otherwise answer is  sum
    if(flag==0) return max;
    else return sum;
}

int main(){
    int arr[ 5] = { };
}