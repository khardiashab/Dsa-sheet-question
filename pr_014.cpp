// in this we merge intervals 
#include <bits\stdc++.h>
using namespace std;


int  merge(int intervals[][2], int s, int v1[][2]) {
    v1[0][0] = intervals[0][0];

    int j = 0; // it is for tracking v1 length
    int size = s;
    for(int i = 1; i < size;  i++){
        if( intervals[i-1][1] < intervals[i][0] ){
            v1[j][1] = intervals[i-1][1];
            j++;
            v1[j][0] = intervals[i][0];
        }
    }
    v1[j][1] = intervals[size-1][1];
    return j+1;
}


int main(){
    int  intervals[4][2] = {{1,3},{2,6},{8,10},{15,18}};
    int v[4][2];
    int v1 = merge(intervals, 4,v);
    cout<< "[";
    for(int i=0; i<v1; ++i){
        cout<< "["<<v[i][0]<<", "<<v[i][1]<<"], ";
    }
    cout<<"]";
}
