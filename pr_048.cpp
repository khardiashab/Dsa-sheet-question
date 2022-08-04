// string is plaindrome or not
#include <bits/stdc++.h>
using namespace std;

void plaindrome(string &s){
    int len = s.size();
    for(int i = 0 ; i < len/2; i++){
        if(s[i] != s[len-1-i]) {
            cout<< "Not Plaindrome.\n";
            return;
        }
    }
    cout<< "Plaindrome.\n";
}

int main(){
    string s = "Ravan";
    string str = "ajayaja";
    plaindrome(s);
    plaindrome(str);
    return 0;
}