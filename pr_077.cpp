//{ Driver Code Starts
#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
public:
    // Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        vector<vector<int>> dp;
        for (int i = 0; i < x; i++)
        {
            vector<int> v(y);
            dp.push_back(v);
            for (int j = 0; j < y; j++)
            {
                dp[i][j] = -1;
            }
        }
        int i = x - 1, j = y - 1;
        int ans = lcss(s1, s2, i, j, dp);
        return ans;
    }

    int lcss(string s1, string s2, int i, int j, vector<vector<int>> &dp)
    {
        if (i == -1 || j == -1)
        {
            return 0;
        }
        if (dp[i][j] != -1)
            return dp[i][j];
        if (s1[i] == s2[j])
        {
            return dp[i][j] = 1 + lcss(s1, s2, i - 1, j - 1, dp);
        }
        else
        {
            int k = max(lcss(s1, s2, i - 1, j, dp), lcss(s1, s2, i, j - 1, dp));
            return dp[i][j] = k;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t, n, k, x, y;
    x = 6, y= 6;
    string s1 = "abcdgh";
    string s2 = "aedfhr";
    // cin >> t;
    // while (t--)
    // {
    //     cin >> x >> y; // Take size of both the strings as input
    //     string s1, s2;
    //     cin >> s1 >> s2; // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    // }
    return 0;
}

// } Driver Code Ends