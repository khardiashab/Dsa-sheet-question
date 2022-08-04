#include <bits/stdc++.h>
using namespace std;
int main(){
     vector<vector<int>> dp;
     int x = 5, y = 5;
        for (int i = 0; i < x; i++)
        {
            vector<int> v(y);
            dp.push_back(v);
            for (int j = 0; j < y; j++)
            {
                dp[i][j] = -1;
            }
        }
        cout<< dp[4][4];
    return 0;
}