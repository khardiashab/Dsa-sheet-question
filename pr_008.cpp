#include <iostream>
using namespace std;

int largestSumOfSubArray(int arr[], int size){
    int sum, checking_sum;
    sum = checking_sum =0;

    // if all the number are negitive number then largest number is the answer
    // else it kadane method 
    // for the first condition we make a flag number that tell us if all are
    // negative   then the flag is 0; else flag 1
    int flag =0; 
    int max = arr[0];
    for(int i=0; i<size; i++){
        if (arr[i]>=0){
            flag = 1;
            break;
        }
        else if( max<arr[i]) max= arr[i];
    }

    for(int i=0; i<size; i++){
        checking_sum += arr[i];
        if(checking_sum <0) checking_sum = 0;
        if (sum<checking_sum) sum = checking_sum;
    }
    if (flag ==0) return max;
    else return sum;
}
int main(){
    int arr[] = {-1,-2,-3,-4};
    cout<< largestSumOfSubArray(arr, 4)<< endl;
}