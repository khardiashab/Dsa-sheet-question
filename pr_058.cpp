// Given a binary string str of length N, the task is to find the maximum
// count of consecutive substrings str can be divided into such that
// all the substrings are balanced i.e. they have equal number of
// 0s and 1s. If it is not possible to split str satisfying the
// conditions then print -1.

// in this question we tell the consecutive substring (that means, when
// a substring end the new one starts.)

#include <bits/stdc++.h>
using namespace std;
int maxConsecutiveSubstring(string str){
    int zeros = 0, ones = 0, count = 0;
    // for this first we run a for loop to traversal the string and 
    // in zeros and ones variable we track the counting of 0 and 1 in
    // string  and when zeros and ones are equal where our first substring
    // ends and next starts  and next equal point second substring ends
    // and so on.
    // these are in consecutive order
    // If we have to all the substring with equal zeros and ones then this
    // question could be hard 

    for(auto i : str){
        if(i == '0') zeros++;

        if(i== '1') ones++;

        if(zeros == ones ) count++;
    }

    if(count == 0) return -1;
    else return count;
}
int main(){
    // body part
    string str = "0100110101";
    cout<< maxConsecutiveSubstring(str)<<endl;
   
    return 0;
}