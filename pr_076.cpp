//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        // code here 
        int sum = 0;
        int count = 0;
        int k;
        for(int i =0; i<S.size(); i++){
            k = changer(S[i]);
            if(sum+ k>=0){
                sum += k;
            }
            else{
                int c =0;
                while(changer(S[i+c])<0){
                    cout<< c<<endl;
                    c++;
                }
                swap(S[i+c], S[i]);
                count += c ; 
                // key point here is that we can swap i and i-1 als0
                k = changer(S[i]);
                sum+=k;
            }
        }
        return count;
    }
    int changer(char c){
        if(c == '[') return 1;
        else return -1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends