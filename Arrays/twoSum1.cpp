#include<iostream>
#include<vector>
using namespace std;

vector<int> TwoSum(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) { // Start j from i+1 to avoid using the same element twice
            if(arr[i] + arr[j] == target) {
                return {i, j}; // Return the indices of the two numbers
            }
        }
    }
    return {-1, -1}; // Return {-1, -1} if no pair is found
}

int main() {
    int arr[] = {2, 6, 5, 8, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 14;
    
    vector<int> ans = TwoSum(arr, n, target);
    
    if(ans[0] != -1) {
        cout << "Indices: " << ans[0] << " and " << ans[1] << endl;
    } else {
        cout << "No such pair exists" << endl;
    }
    
    return 0;
}
