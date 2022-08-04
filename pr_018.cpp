// Given an array of N integers, and an integer K, find the number of pairs of elements in the array
//  whose sum is equal to K.

// Example 1:
// Input:
// N = 4, K = 6
// arr[] = {1, 5, 7, 1}
// Output: 2
// Explanation:
// arr[0] + arr[1] = 1 + 5 = 6
// and arr[1] + arr[3] = 5 + 1 = 6.

// Example 2:
// Input:
// N = 4, K = 2
// arr[] = {1, 1, 1, 1}
// Output: 6
// Explanation:
// Each 1 will produce sum 2 with any 1.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function
// getPairsCount() which takes arr[], n and k as input parameters and returns the number of
//  pairs that have sum K.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= N <= 105
// 1 <= K <= 108
// 1 <= Arr[i] <= 106

// I can solve this problem with three mthod  method
// 1 broute force aprocah

#include <bits/stdc++.h>
using namespace std;

// broute force approach
int broute_force_approach(int arr[], int size, int sum)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((sum - arr[i]) == arr[j])
                count++;
        }
    }
    return count;

    // time complexity = O(n^2)
    // auxilary space complexity = O(1)
}

// after sorting method
int afterSorting(int arr[], int size, int sum)
{
    int count = 0;
    sort(arr, arr + size - 1);

    // I have sorted the array and now I am use two pointer approach to solve this
    int starter = 0, end = size - 1;

    while (starter < end)
    {

        // there are three condtion for sum
        if ((arr[starter] + arr[end]) > sum)
            end--;

        // second condition where the sum is big from the both's add
        if ((arr[starter] + arr[end]) < sum)
            starter++;

        // both are equal
        if ((arr[starter] + arr[end]) == sum)
        {
            int t1 = 1, t2 = 1;
            if (arr[starter] == arr[end])
            {
                int n = end - starter + 1;
                count += n * (n - 1) / 2;
                break;
            }
            else
            {
                while (arr[starter] == arr[starter + 1])
                {
                    t1++;
                    starter++;
                    // when we duplicate element
                }
                while (arr[end] == arr[end - 1])
                {
                    t2++;
                    end--;
                }
                count += t1 * t2;
            }
        }
    }
    return count;

    // time complexity = O(nlog(n))
    // space complexity = O(n)
}

// using an unodered map
int usingMap(int arr[], int size, int sum)
{
    unordered_map<int, int> ar;
    for (int i = 0; i < size; i++)
    {
        ar[arr[i]]++;
    }

    int count = 0;
    int n =0;
    for (int i = 0; i < size; i++)
    {
        auto it = ar.find(arr[i]);
        if(sum - arr[i] == arr[i]){
            n ++;
        }
        else if(sum - arr[i] == it->first)
        {
            count += it->second ;
        }
    }
    count += n * (n-1)/ 2;
    return count;
    // time complexity = O(n)
    // auxilary space = O(n)
}
int main()
{
    int N = 4, K = 2;
    int arr[] = {1, 1, 1, 1};
    cout << "1st: " << broute_force_approach(arr, N, K) << endl;
    cout << "2nd: " << afterSorting(arr, N, K) << endl;
    cout << "3rd: " << usingMap(arr, N, K) << endl;
    return 0;
}