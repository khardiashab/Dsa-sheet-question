 #include <iostream>
 using namespace std;
 #define f(n) for(int i=0; i<n; ++i)

void alter_array(int arr[], int s){
    int sum =0;
    int twos=0; 
    int zeros=0; 
    int ones=0;
    f(s){
        sum+= arr[i];
        arr[i] = arr[i]/2;
        twos += arr[i];
    }
    ones = sum - 2*twos;
    zeros = s - twos-ones;
    f(s){
        if (i<zeros) arr[i] =0;
        else if (i<(zeros+ones)) arr[i] = 1;
        else arr[i] = 2;
    }
}
int main(){
    int arr[] = {0,2,2,1,1,0,0,2};
    alter_array(arr, 8);
    f(8) cout<< arr[i]<<" ";
}