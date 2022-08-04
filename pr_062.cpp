// Parenthisis checker
// Given an expression string x. Examine whether the pairs and the orders
// of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
// For example, the function should return 'true' for
// exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.

#include <bits/stdc++.h>
using namespace std;
void changer(char &c){
        if(c == '[')  c = -3;
        if(c == '{')  c = -2;
        if(c == '(')  c = -1;
        if(c == ')')  c = 1;
        if(c == '}')  c = 2;
        if(c == ']')  c = 3;
    }
// I solve this problem with help of stack
void parenthisisChecker(string str){
    stack<char> st;

    for(auto i: str){
        changer(i);
        if(i < 0){
            st.push(i);
        }

        if(i> 0){
            if(st.empty()){
                cout<< "false\n";
                return;
            }
            if((st.top() + i)){
                cout<< "false\n";
                return;  
            } 
            else st.pop();
        }
    }
    if(st.empty()){
    cout<< "True\n";
    return;
    }  else
    {
    cout<< "false\n";
    return;
    }
}
int main(){
   // body part
    string s = "[()]{}{[()()]()}";
    parenthisisChecker(s);
    string exp = "[(])";
    parenthisisChecker(exp);
    return 0;
}