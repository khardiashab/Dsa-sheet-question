// Given a string S consisting of only opening and closing curly brackets '{'
// and '}', find out the minimum number of reversals required to convert the string
// into a balanced expression.
// A reversal means changing '{' to '}' or vice-versa.

#include <bits/stdc++.h>
using namespace std;

int countReversal(string str){
    int count = 0;
    if(str.size() % 2 != 0) return -1;

    stack<char> st;

    for(auto i: str){
        if(i == '{') i = -1;
        else i = 1;

        if(i<0){
            st.push(i);
        }
        else {
            if(st.empty()) {
                count++;
                i = -1;
                st.push(i);
            }
            else st.pop();
        }
    }
    count += st.size()/2;
    return count;
}

int main(){
    // body part
    string s = "}{{}}{{{";
    cout<< countReversal(s) <<endl;
    return 0;
}