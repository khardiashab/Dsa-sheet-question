#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int col = 0;
        int flag = 0;
        int flag2 = 0;
        while(1){
            char c = strs[0][col] ;
            for(auto i: strs){
                if(i[col]== '\0') {
                    flag2 = 1;
                    break;
                }
                if(c != i[col]) flag = 1;
            }
            if(flag2 == 1) break;
            if( flag == 1) break;
            col++;
            s += c;
        }     
        return s;
    }
};
int main(){
   // body part
   vector<string> s ={"flower","flow","flowe"};
    Solution st;
    cout<<st.longestCommonPrefix(s)<<endl;  
    return 0;
}