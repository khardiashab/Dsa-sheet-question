// find the longest recurring subsequence;
#include <bits/stdc++.h>
using namespace std;
// first I use brute froce approach took all the subsequence and check which
// two are the longest recurring subsequence;
void printMultiMap(map<int, vector<string>> &m){
    for(auto & i: m ){
        cout<< i.first <<" : ";
        for(auto &j: i.second){
            cout<< j <<" ";
        }
        cout<< endl;
    }
    cout<< endl;
}
void subsequence(string s, string ans, map<int, vector<string>> &multi){
    // base case
    if(s.size()==0){
        // cout<< ans<<" ";
        int len = ans.size();
        multi.insert(pair<int, vector<string>>(len, vector<string>()));
        multi[len].push_back(ans);
        return;
    }

    char c = s[0];
    s.erase(0,1);
    subsequence(s, ans + c, multi);
    subsequence(s, ans, multi);
}

string longestRecurringSubsequence(map<int, vector<string>> & m){
    // let's find all the subsequence and store in  multi map
    for(auto v= m.end(); v != m.begin(); v--){
        int len = v->second.size();
        for(int i = 0; i<len; i++){
            for(int j = 0; j< len; j++){
                if(i==j) continue;
                if (v->second[i]== v->second[j]) 
                return v->second[i]; 
            }
        }
    }
}

int main(){
   // body part
    map<int, vector<string>> multi;
    string ans = "";
     string s = "abacbcd";
    subsequence(s,ans, multi);
    // printMultiMap(multi);
    string lS = longestRecurringSubsequence(multi);
    cout<< lS.size();
    return 0;
}