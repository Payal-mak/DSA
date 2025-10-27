#include<iostream>
using namespace std;

int factorial(int n) {

if(n > 1)
    return n * factorial(n - 1);

else
    return 1;
}
int pascalTriangle(int r, int c) {
        r-=1;
        c-=1;
    int element = factorial(r)/(factorial(c)*factorial(r-c));
    return element;
}
void pascalTriangleVar2(int n){
    for(int i=1;i<=n;i++){
        cout<<pascalTriangle(n,i)<<" ";
    }
    cout<<endl;
}
void pascalTriangleVar3(int N){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<pascalTriangle(i,j)<<" ";

        }
        cout<<endl;
        
        
    
    }
    
}
int main(){
    //var-1
    cout<<pascalTriangle(5,3)<<endl;
    //var-2
    int n=5;
    pascalTriangleVar2(n);
    //var-3
    pascalTriangleVar3(n);




    return 0;
}