// converting Roman Numerals to Decimals
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int romanToDecimal(string &str)
    {
        // code here
        int dec = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (percedence(str[i]) < percedence(str[i + 1]))
            {
                dec += value(str[i + 1]) - value(str[i]);
                i++;
            }
            else
                dec += value(str[i]);
        }
        return dec;
    }
    int percedence(char str)
    {
        switch (str)
        {
        case 'I':
            return 1;
            break;
        case 'V':
            return 2;
            break;
        case 'X':
            return 3;
            break;
        case 'L':
            return 4;
            break;
        case 'C':
            return 5;
            break;
        case 'D':
            return 6;
            break;
        case 'M':
            return 7;
            break;

        default:
            break;
        }
    }
    int value(char str)
    {
        switch (str)
        {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:
            break;
        }
    }
};
int main()
{
    // body part

    return 0;
}