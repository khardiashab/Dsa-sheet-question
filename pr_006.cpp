#include <iostream>
using namespace std;

int douinon(int a[],int n, int b[], int m){
    int i, j, k,count, c[n+m];
    i = j = k = count =0;
    while ((i<n && j<m))
    {//    std::cout <<count<<endl;
        if (a[i]< b[j]){
            c[k] = a[i];
            i++; k++;
        }
        else if(a[i] == b[j]){
            c[k] = a[i];
            i++;j++;k++;
        }
        else {
            c[k] = b[j];
            k++;j++;
        }
        count ++;
    }
    while(i<n){
        c[k] = a[i];
        k++;i++;
        count++;
    }
    while(j<m){
        c[k] = b[j];
        k++;j++;
        count++;
    }
    for(int i= 0; i<n+m; ++i) std::cout<< c[i]<<" ";
    std::cout<<endl;
    return count;
    
}
int main(){
    int arr1[6] = {85,1,25,32,54,6};
    int arr2[2] = {85,2};
    int s = douinon(arr1,6,arr2,2);
    std::cout<< s;
}