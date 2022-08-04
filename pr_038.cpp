// Write an efficient algorithm that searches for a value target in an m x n
// integer matrix matrix. This matrix has the following properties:

//  -  Integers in each row are sorted from left to right.
//  - The first integer of each row is greater than the last integer of
//    the previous row.

#include <bits/stdc++.h>
using namespace std;


void search(vector<vector<int>> v, int target){
    int row = v.size();
    int col = v[0].size();
    int flag = 0;
    int i;
    for(i =0; i< row; i++){
        if(v[i][0] > target) break;
    }

    // here we do i-- 
    i--;

    int low = 0, high = v[0].size()-1;
    while(low < high){
        int mid = (low + high)/ 2;
        if (v[i][mid] == target ) {
            flag = 1;
            break;
        }
        else if(v[i][mid] < target) {
            low = mid+1;
        }        
        else if(v[i][mid] > target) {
            high = mid;
        }
    }
    if (flag == 0) cout<< "False.";
    else cout<< "True.";
}

int main(){
       vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 11}
    };
    int target = 9;
    search(vect, target);
    return 0;
}