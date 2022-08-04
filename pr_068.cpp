// Count plaindromic subsequence of a string
// Given a string str of length N, you have to find number of palindromic
// subsequence (need not necessarily be distinct) which could be formed from the
// string str.

#include <bits/stdc++.h>
using namespace std;
// this will i do with the help of dynamic programming

int CPSS(string str)
{
    int len = str.size();
    // now i create a matrix of len * len
    int dp[len][len] = {
        {
            0,
        },
    };
    int count = 0;
    // now I traversal in this dp columnwise
    for (int col = 0; col < len; col++)
    {
        for (int row = 0; row < len; row++)
        {
            if (row == col)
            {
                dp[row][col] = 1;
                count++;
            }
            if (row < col)
            {
                if (str[row] == str[col])
                {
                    if (dp[row + 1][col - 1])
                    {
                        dp[row][col] = 1;
                        count++;
                    }
                }
            }
        }
    }
}
int main()
{
    string s = "abcd";
    cout<< CPSS(s) << endl;
    s = "abad";
    cout<< CPSS(s) << endl;

    return 0;
}