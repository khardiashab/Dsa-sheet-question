// Given an array arr[] of N non-negative integers representing the height of blocks.
// If width of each block is 1, compute how much water can be trapped between the blocks
// during the rainy season. 
 
// Example 1:
// Input:
// N = 6
// arr[] = {3,0,0,2,0,4}
// Output:
// 10
// Explanation: 

// Example 2:
// Input:
// N = 4
// arr[] = {7,4,0,9}
// Output:
// 10
// Explanation:
// Water trapped by above 
// block of height 4 is 3 units and above 
// block of height 0 is 7 units. So, the 
// total unit of water trapped is 10 units.
// Example 3:

// Input:
// N = 3
// arr[] = {6,9,9}
// Output:
// 0
// Explanation:
// No water will be trapped.

// Your Task:
// You don't need to read input or print anything. The task is to complete the function
// trappingWater() which takes arr[] and N as input parameters and returns the total
// amount of water that can be trapped.


// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)


// Constraints:
// 3 < N < 106
// 0 < Ai < 108

#include <bits/stdc++.h>
using namespace std;

// brute force approach
int method1(int arr[], int size){
    int area =0;

    for(int i =1; i<size-1; i++){
        int leftMax = arr[0], rightMax =0;
        for(int j = i; j>=0; j--){
            if(leftMax < arr[j]) leftMax = arr[j];
        }
        for(int j = i; j<size; j++){
            if(rightMax < arr[j]) rightMax = arr[j];
        }

        area += min(leftMax, rightMax) - arr[i];
    }
    return area;

    // time complexity  = O(N^2)
    // space  = O(1)
}
// how can i use space to reduce the complexity 
//method two by using dp I don't know
// If we have right max and left max for every point then we can solve this problem with
// O(n)
int method2(int arr[], int size){
    int leftMax[size], rightMax[size];
    leftMax[0] = arr[0], rightMax[size-1] = arr[size-1];
    // for left max we start the from the left side
    for(int i =1; i<size; i++){
        leftMax[i] = max(arr[i], leftMax[i-1]);
    }

    // for right max we start from the right side 
    for(int i = size -2; i>= size; i--){
        rightMax[i] = max(arr[i], rightMax[i+1]);
    }

    // now we have right max and left max for every point 
    // let's calculate the value of trapping water 

    int water = 0;
    for(int i =1; i<size-1; i++){
        water += min(leftMax[i], rightMax[i]) - arr[i];
    }

    return water ;
    // time complexity = O(N)
    // space complexity = O(N)

}

// now I search an another method from the internet it is
// two pointer approach 
int method3(int arr[], int size){
    int i =1 , j = size-2;
    int rightMax= arr[size-1], leftMax = arr[0];

    // we took two pointer i and j and run them from oppsite 
    // side and find out the water

    int water =0;

    while(i<=j){
        leftMax = max(arr[i], leftMax);
        rightMax = max (arr[j], rightMax);

        if(leftMax < rightMax){
            // in this condition we move left point (i) 
            water += leftMax - arr[i];
            i++;
        }

        if(leftMax >= rightMax){
            // in this condition we move right pointer (j)
            water += rightMax - arr[j];
            j--;
        }

    }
    return water;
}
int main(){
    int arr[] = {7,4,0,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    int w1 = method1(arr, size);
    int w2 = method2(arr, size);
    int w3 = method3(arr, size);
    cout<< w1 <<"  "<<w2<<"  "<<w3<< "  ";
    return 0;
}