/*Given an array and a sum k, 
we need to print the length of the longest subarray that sums to k.*/
#include<iostream>
using namespace std;

int LongestSumArr(int arr[], int n, int k)
{
    int len = 0;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            int sum = 0;
            for (int K = i; K <= j; K++) {
                sum += arr[K];
            }
            if(sum==k){
                len = max(len, j-i+1);
            }
        }
    }
    return len;
}
int main(){
    int arr[] = {2,-1,5,1,9};
    int sum = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    int longest_sumarr = LongestSumArr(arr, n, sum);
    cout << longest_sumarr << endl;
    return 0;
}