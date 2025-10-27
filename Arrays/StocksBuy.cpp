//Stock Buy And Sell
//You are given an array of prices where prices[i] is the price of a given stock on an ith day.
#include<iostream>
using namespace std;

int Stocks(int arr[], int size)
{
    int maxPro = 0;
    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(arr[j] > arr[i]){
                maxPro = max(arr[j] - arr[i], maxPro);
                
            }
        }
    }
    return maxPro;
}
int main(){
    int arr[] = {7,6,4,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int profit = Stocks(arr, n);
    if(profit == 0){
        cout << "no profit" << endl;
    }
    else{
        cout << profit << endl;
    }
    return 0;
}