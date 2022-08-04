// In daily share trading, a buyer buys shares in the morning and sells
// them on the same day. If the trader is allowed to make at most 2
// transactions in a day, whereas the second transaction can only start
// after the first one is complete (Buy->sell->Buy->sell). Given stock 
// prices throughout the day, find out the maximum profit that a share
// trader could have made.

// Examples: 
// Input:   price[] = {10, 22, 5, 75, 65, 80}
// Output:  87
// Trader earns 87 as sum of 12, 75 
// Buy at 10, sell at 22, 
// Buy at 5 and sell at 80
// Input:   price[] = {2, 30, 15, 10, 8, 25, 80}
// Output:  100
// Trader earns 100 as sum of 28 and 72
// Buy at price 2, sell at 30, buy at 8 and sell at 80
// Input:   price[] = {100, 30, 15, 10, 8, 25, 80};
// Output:  72
// Buy at price 8 and sell at 80.
// Input:   price[] = {90, 80, 70, 60, 50}
// Output:  0
// Not possible to earn.

#include <bits/stdc++.h>
using namespace std;

// one time buy and sell profit
int oneTimeProfit(int arr[], int starting_point, int ending_point){
    int b, s, max, checker; // b for buying and s for selling
    b = arr[starting_point];
    s= arr[starting_point];
    max = s-b;


    for(int i=starting_point +1; i<= ending_point; i++){
        // trader only can make profit with two condition 
        // first when he buy shares in less pricesprice[] = {90, 80, 70, 60, 50};
        if(arr[i]<b && i<ending_point ){
            b = arr[i];
            s = arr[i+1];
            checker = s-b;
            if(max<checker) max = checker;
        }

        // second if he sell share on high prices
        if(arr[i] > s){
            s = arr[i];
            checker = s-b;
            if(max<checker) max = checker;
        }
    }
    return max;
}
// buying two shares at one day
int twoTimeProfit(int arr[], int size){
    int max =0;
    int checker = 0;

    int first , second;

    for(int i=1; i<size-2; i++){
        first = oneTimeProfit(arr, 0, i);
        second = oneTimeProfit(arr, i+1, size-1);
        checker = first + second;
        if(max<checker) max = checker;

    }
    return max;
}
int main(){
    int price[] = {10, 22, 5, 75, 65, 80};
    int size = sizeof(price)/sizeof(price[0]);
    int profit = twoTimeProfit(price, size);
    cout<< profit;
   
    return 0;
}