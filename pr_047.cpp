// reverse a string 
#include <bits/stdc++.h>
using namespace std;

// method one simple brutforce
void display(string s){
    cout<< s<<endl;
}

void method1(string &s){
    for(int i = 0; i<s.size()/2; i++){
        swap(s[i], s[s.size() -1 -i]);
    }
}
// method 2 by using reverse function
void method2(string &s){
    reverse(s.begin(), s.end());
}
int main(){
    string s = "There is one string.";
    display(s);
    method1(s);

    display(s);
    method2(s);
    display(s);
    return 0;
}