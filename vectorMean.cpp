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
double vectorMean(vector<int> &v){
    int a = v.size();
    double sum = 0;
    for(int i = 0; i < a; i++){
        sum += v[i];
    }
    return sum / v.size();
    
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int size = v.size();
    vectorInput(v);
    vectorPrint(v);
    int mean = vectorMean(v);
    cout << mean;
    cout << endl;
    return 0;
}