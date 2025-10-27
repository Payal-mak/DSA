/*Given a non-empty array of integers arr,
every element appears twice except for one. Find that single one.*/
//brute force approach
#include<iostream>
using namespace std;

int CountSingle(int arr[], int size)
{
    for(int i = 0; i<size; i++){
        int count = 0;
        int num = arr[i];
        for(int j = 0; j<size; j++){
            if(arr[j]==num){
                count++;
            }
        }
        if(count == 1){
            return num;
        }
        
    }
    return -1;
    
}
int main(){
    int arr[] = {1,1,2,3,3,4,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int cnt = CountSingle(arr, size);
    cout << cnt << endl;
    return 0;
}