//Given an array of N integers, right rotate the array by one place.
#include<bits/stdc++.h>
using namespace std;

int vectorMax(vector<int> &v){
    int max_e = INT_MIN;
    for(int x : v){
        max_e = max(max_e, x);
    }
    return max_e;
}
void vectorInput(vector<int> &v){
    int n=v.size();
    for(int i = 0; i < n; i++){
        cin >> v[i] ;
    }
    
}
void vectorPrint(vector<int> &v){
    for(int x : v){
        cout << x ;
    }
    cout << endl;
    
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vectorInput(v);
    //v.push_back(6);
    vectorPrint(v);
    //cout << endl;
    int max_e = vectorMax(v);
    cout << "maximum ele: " << max_e;
    cout << endl;
    return 0;
}