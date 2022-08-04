// duplicate char in a string
#include <bits/stdc++.h>

using namespace std;

// we do by useing unodered map
void method1(string &s){
    unordered_map<char, int> umap;
    for(auto i: s){
        umap[i]++;
    }
    
    for(auto i: umap){
        cout<< i.first << "  count : "<<i.second <<endl;
    }
}

int main(){
    string s = "geeksforgeek";
    method1(s);
    return 0;
}