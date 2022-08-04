// find the longest plaindrome substring

#include <bits/stdc++.h>
using namespace std;
bool isPlaindrome(string & str){
    int len = str.size();
    for(int i = 0; i < len/2; i++){
        if(str[i] != str[len -1 -i]) 
            return false;
    }
    return true;

}
// for this the brute froce approach
int bruteFoce(string &s){
    // in this we make all substring and check for plaindrom and longest
    vector<string> v;
    for(int i = 0; i < s.size() ; i++){
        for(int j = i; j <s.size(); j++){
            v.push_back(s.substr(i,j));
        }
    }
    int maxSize = 0;
    for(auto & str: v){
        if(isPlaindrome(str)){
            int len = str.size();
            maxSize = max(maxSize, len);
        }
    }
    return maxSize;
}


int main(){
   // body part
    string s = "rajaramarai";
    int len = bruteFoce(s);
    cout<< len<<endl;
    return 0;
}