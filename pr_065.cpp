// longest prefix sufix 
// Given a string of characters, find the length of the longest proper
// prefix which is also a proper suffix.
// NOTE: Prefix and suffix can be overlapping but they should not be
// equal to the entire string.

#include <bits/stdc++.h>
using namespace std;

// now I am thinking to solve this problem with help of two pointer where
// where both pointer points last and last - 1 index and and decreasing 

string lps(string str){
    int i , j ,len;
    len = str.size();
    j = len - 1;
    i = j -1;

    int b = 0;
    while(i>= 0){
        if(str[i]== str[j]){
            b++; 
            i--; j--;
            cout<< "yes\n";
        }
        else{
            i = i + b -1; // this is 
            j= len -1;
            b = 0;
        }
    }
            cout << "This is couting : "<< b << endl;
    string s = "";
    // cout<< "This is j; " << j<<endl;
    if(j< len-1) s = str.substr(j+1);

    return s;
}

// this algo in the wrost case O(N^2) in best case O(N);

int main(){
    // body part
    string s = "ababaaaaaaaaa";
    cout<< lps(s);
   
    return 0;
}