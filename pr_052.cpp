// write a code to check whether a string is a valid shuffle of two strings.
// or not 

#include <bits/stdc++.h>
using namespace std;
// first method 
//     in this method first method we use sort all string 
void method1(string &s1, string &s2, string &m){
    s1.append(s2);
    if(s1.size()== m.size()){
        sort(s1.begin(), s1.end());
        sort(m.begin(), m.end());
        for(int i = 0; i< m.size(); i++){
            if(s1[i] != m[i]){
                cout<< "Not valid shuffle\n";
                return;
            }
        }
        cout<< "Valid shuffle.\n";
    }
    else cout<< "Not valid Shuffle.\n";
}


// second method we make unordered map from both strings if boths map are equal
// then they are shuffle of one another
int main(){
   // body part
   
    return 0;
}