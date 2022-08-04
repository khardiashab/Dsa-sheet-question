#include <bits/stdc++.h>
using namespace std;

int minFlips(string S){
    int odd = 0, even = 0;
    int len = S.size();
    int evenPlace, oddPlace;
    evenPlace = len/2;
    oddPlace = len - evenPlace;
    for(auto i= 0; i<len; i++){
        odd += S[i] -'0';
        i++;
        if(i==len) break;
        even += S[i] - '0';
    }
    int flip = min((evenPlace-even)+ odd, oddPlace-odd+even);
    return flip;
}
int main(){
   // body part
   
    return 0;
}