//Given a vector of N integers, right rotate the array by one place.
#include<bits/stdc++.h>
using namespace std;

void vectorInput(vector<int> &v){
    int n=v.size();
    for(int i = 0; i < n; i++){
        cin >> v[i] ;
    }
    
}
void RightShift(vector<int> &v)
{
    int size = v.size();
    int temp = v[size-1];
    for(int i =size-1; i>0; i--){
        v[i] = v[i-1];
    }
    v[0] = temp;
    
}
void vectorPrint(vector<int> &v){
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;
    
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vectorInput(v);
    RightShift(v);
    vectorPrint(v);
    cout << endl;
    return 0;
}