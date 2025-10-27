//Leaders in an Array
//Given an array, print all the elements which are leaders.
//A Leader is an element that is greater than all of the elements on its right side in the array.
#include<bits/stdc++.h>
using namespace std;

vector<int> printLeadersBruteForce(int arr[], int n)
{
    vector<int> ans;
    for(int i = 0; i<n; i++){
        bool leader = true;
        for(int j = i+1; j<n; j++){
            if(arr[j] > arr[i]){
                leader = false;
                break;
            }
        }
        if(leader == true){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
int main(){
    int arr[] = {4, 7, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans = printLeadersBruteForce(arr,n);
  
    for(int i = 0;i<ans.size();i++){
      
        cout<<ans[i]<<" ";
    }
  
    cout<<endl;
    return 0;
}