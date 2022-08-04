// second Most repeated string in a sequence
#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string, int> umap;
        while(n--){
            string s = *arr;
            umap[s]++;
            arr++;
        } 
        string key ="";
        string ans = "";
        int m = 0;
        for(auto i: umap){
            m = max(m, i.second );
        }
        int ans_len = 0;
        for(auto i: umap){
            if(i.second == m) continue;
            if(ans_len < i.second){
                ans_len = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};
int main(){
   // body part
   
    return 0;
}