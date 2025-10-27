#include<bits/stdc++.h>
using namespace std;

void vectorInput(vector<int> &v){
    int n=v.size();
    for(int i = 0; i < n; i++){
        cin >> v[i] ;
    }
    
}
void vectorPrint(vector<int> &v){
    vector<int>:: iterator itr;
    for(itr = v.begin(); itr != v.end(); itr++){
        cout << &(*itr) << " " << (*itr) << "\n";
    }
    cout << endl;
    
}
//how to print the address of iterator
double vectorMedian(vector<int> &v){
    sort(v.begin(), v.end());
    int n = v.size();
    return (n % 2 == 1) ? v[n/2] : (v[n/2] + v[(n/2)-1])/2.0;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int size = v.size();
    vectorInput(v);
    vectorPrint(v);
    int mean = vectorMedian(v);
    cout << mean;
    cout << endl;
    return 0;
}