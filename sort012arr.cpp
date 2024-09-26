//Sort an array of 0s, 1s and 2s
//Given an array consisting of only 0s, 1s, and 2s. 
//Write a program to in-place sort the array without using inbuilt sort functions.

#include<iostream>
using namespace std;

void sortArray(int arr[], int n)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0){
            cnt0++;
        } 
        else if (arr[i] == 1){
            cnt1++;
        } 
        else{
            cnt2++;
        } 
    }
    //Replace the places in the original array:
    for (int i = 0; i < cnt0; i++) arr[i] = 0; 
    for (int i = cnt0; i < cnt0 + cnt1; i++) arr[i] = 1; 
    for (int i = cnt0 + cnt1; i < n; i++) arr[i] = 2; 

}

int main(){
    int arr[] = {2,0,0,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortArray(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}