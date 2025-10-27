#include<iostream>
using namespace std;

int frequency(int arr[], int n)
{
    int cnt = 0;
    for(int i = 0; i<n; i++){
        int nums = arr[i];
        for(int j = 0; j<n; j++){
            if(arr[j] == arr[i]){
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    int arr[] = {1,2,2,3,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = frequency(arr, n);
    cout << count << endl;
    return 0;
}