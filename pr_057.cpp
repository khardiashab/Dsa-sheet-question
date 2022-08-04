// print all the permutation of a string
#include <bits/stdc++.h>
using namespace std;

void permutationOfString(string &str, int s, int e){
    // base case 
    if(s == e){
         cout<< str<<" ";
        return;
    }
    for(int i = s; i<=e; i++){
        swap(str[s], str[i]);
        permutationOfString(str, s+1, e);
        swap(str[s], str[i]);
    }
}

int main(){
   // body part
    string a = "abc";
    int len = a.size();
    permutationOfString(a, 0, len-1);
    return 0;
}