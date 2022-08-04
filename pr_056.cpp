// print all the subsequence of a string
#include <bits/stdc++.h>
using namespace std;

// here i print it with help of recursion 
void printSS(string str, string subseq){
    //base case 
    if( str.size() == 0){
        cout<< subseq << " ";
        return ;
    }
    
    char c = str[0];
    str.erase(0,1);
    // frist case where we did not put the first char of string in subseq
    printSS(str, subseq);

    // second case where I put the first char of string in subseq

    printSS(str, subseq + c);

    // time complexity of this algorithum is 2^n 
    // space complexity of this algo == 2^n
}
 
int main(){
    // body part 
    string str = "ajay";
    string ans = ""; // here we took a empty string to give the function 
    
    printSS(str, ans);
    return 0;
}