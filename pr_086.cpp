// Write a function “runCustomerSimulation” that takes following two inputs 

// An integer ‘n’: total number of computers in a cafe and a string: 
// A sequence of uppercase letters ‘seq’: Letters in the sequence occur in pairs.
// The first occurrence indicates the arrival of a customer; the second indicates
// the departure of that same customer. 
// A customer will be serviced if there is an unoccupied computer. No letter will 
// occur more than two times. 
// Customers who leave without using a computer always depart before customers who 
// are currently using the computers.
#include <bits/stdc++.h>
using namespace std;

int runCustomerSimulation(int n, string s){
    // just make a stack of len n 
    int count = 0;
    stack<char> st;

    for(auto i: s){
        if(st.empty()){
            st.push(i);
            continue;
        }
        if(st.top()== i){
            st.pop();
            continue;
        }
        if(st.size()== n){
            count++;
            continue;
        }
        st.push(i);
    }
    return count/2;
}
int main(){
    cout<< runCustomerSimulation (3, "GACCBDDBAGEE")<<endl;
    cout<< runCustomerSimulation (2, "ABBAJJKZKZ")<<endl;
    cout<< runCustomerSimulation (1, "GACCBDDBAGEE")<<endl;
    return 0;
}