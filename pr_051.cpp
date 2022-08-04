// check another string is rotation of another string or not
#include <bits/stdc++.h>
using namespace std;
// I am going to do this by making a newstring of copying a string
//  like "ajay" + "ajay";
void method1(string &str, string &str2)
{
    // first we need to check the length of both strings
    // if both string length is same then we process this code
    if (str.size() == str2.size())
    {
        string goal = str2 + str2;
        int j = 0; // this track the string first
        for (int i = 0; i < goal.size(); i++)
        {
            {
                if (str[j] == goal[i])
                {
                    j++;
                }
                else
                    j = 0;
                if (j == str.size())
                {
                    cout << "This is roation of another string\n";
                    return;
                }
            }
        }
    }
    cout << "This is not the rotation of another string\n";
}
void method2(string &s, string &str)
{
    if (str.size() == s.size())
    {
        string str2 = str + str;
        if (str2.find(s) != -1)
            cout << "This is roation of another string\n";
        else
            cout << "This is not the rotation of another string\n";
    }
    else
        cout << "This is not the rotation of another string\n";
}

// in third method we also can do it by sorting it and compair both of them.
// 
// in forth method we
int main()
{
    string str1 = "ajaya";
    string str2 = "jaya";
    method1(str1, str2);
    method2(str1, str2);
    return 0;
}