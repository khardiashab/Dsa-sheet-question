// 
// find the factorial a big number


#include <bits/stdc++.h>
using namespace std;

// what is this function 
// like you  523432 * 10 = 5234320
 // input:  v = {2,3,4,3,2,5} x= 10 , size = 6;
 // output : size of vector = 7;  v = {0,2,3,4,3,2,5}
// int multiply(vector<int> & v, int size, int x){
//     int carry = 0;
//     for(int i=0; i<size; i++){
//         int product = v[i] * x + carry;
//         v[i] =  product % 10;
//         carry = product / 10;
//     }
//     // for the last case the carry is left  so we also enter in vector
//     while(carry){
//         v[size] = carry % 10;
//         carry = carry / 10;
//         size++;
//     }

//     return size;
// }
void print(){
    cout<< "Hello World\n";
}
vector<int> fact(int n){

    vector<int> v;
    v.push_back(1);

    for(int x= 2; x<= n; x++){
        int carry = 0;
        for(int i=0; i<v.size(); i++){
            int product = v[i] * x + carry;
            v[i] =  product % 10;
            carry = product / 10;
        }
        // for the last case the carry is left  so we also enter in vector
        while(carry){
            v.push_back(carry % 10);
            carry = carry / 10;
        }
    }
    reverse(v.begin(), v.end());
    return v;
}

int main(){
    vector<int> v;
    v =  fact(100);
    for(auto i : v) cout<< i; 
   
    return 0;
}