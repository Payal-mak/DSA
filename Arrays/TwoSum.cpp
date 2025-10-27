//Given an array of integers arr[] and an integer target.
//Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.


#include<iostream>
using namespace std;

string TwoSum(int arr[], int n, int target)
{
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            if(arr[i]+arr[j] == target){
                return "YES";
            }
        }
    }
    return "NO";
}
int main(){
    int arr[] = {2, 6, 5, 8, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 14;
    string ans = TwoSum(arr, n, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}