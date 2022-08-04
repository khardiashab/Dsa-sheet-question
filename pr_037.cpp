// spiral treversal in a matrix 

#include <iostream>
#include <vector>
using namespace std;

void display(vector<vector<int>> v){
    for(auto &i : v){
        for(auto &j: i){
            cout<<j <<"  ";
        }
        cout<<endl;
    }
}
void spiral_display(vector<vector<int>> &v){
    int count = 0;
    int s = v.size() * v[0].size();
    int row = v.size();
    int col = v[0].size();
        int i=0, j = 0, k=0;
    while(count < s){
        // first 
        while(j<col-k && count < s){
            cout<< v[i][j]<<" ";
            j++;
            count++;
        }
        i++; j--;

        // second
        while(i<row-k  && count < s){
            cout<<v[i][j]<<" ";
            i++; count++;
        }

        j--; i--;

        // third
        while(j>=0 +k  && count < s){
            cout<< v[i][j]<<" ";
            j--; count++;
        }

        j++; i--;

        // fourth

        while(i>k  && count < s){
            cout<<v[i][j]<<" ";
            i--; count++;
        }
        cout<<endl;
        k++;
        j++; i++;
        
    }
}
int main(){
    int x = 4;
    int y = 4;
    vector<int> col(y,0);
    vector<vector<int>> v(x, col);
    for(auto &i : v ){
        for(int &j: i){
            j = ( rand()%10+1);
        }
    }
    display(v); 
    spiral_display(v);

    return 0;      
}
