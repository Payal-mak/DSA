#include<bits/stdc++.h>
using namespace std;

void vectorInput(vector<int> &v){
    int n=v.size();
    for(int i = 0; i < n; i++){
        cin >> v[i] ;
    }
    
}
void vectorPrint(vector<int> &v){
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;
    
}
// void reversePrint(vector<int> &v){
//     int left = 0;
//     while(left < v.size() - 1 - left){
//         swap(v[left], v[v.size() - 1 - left]);
//         left++;
//     }
//     vectorPrint(v);
// }
void reversePrint(vector<int> &v){
    int left = 0; //r = n-l-1
    int n = v.size();
    while(left < (n-1)/2){
        swap(v[left], v[n - 1 - left]);
        left++;
    }
    vectorPrint(v);
}

// void reversePrint(vector<int> &v){
//     int left = 0, right = v.size() - 1;
//     while(left < right){
//         v[left] = v[right];
//         left++;
//         right--;
//     }
//     vectorPrint(v);
// }
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int size = v.size();
    vectorInput(v);
    vectorPrint(v);
    reversePrint(v);
    cout << endl;
    return 0;
}