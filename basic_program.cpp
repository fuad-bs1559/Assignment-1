#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    int ans = 1;
    if(n < 1)return ans = max(0 , 1);
    return ans += fibo(n-1)+fibo(n-2);
    return ans;
}

int main(){

    // basic program for calculating factorial
    // this is the experimental-branch
    // we have to calculate fibonacci serise...
    int n;
    cin>>n;
    int num = fibo(n);
    cout<<num<<endl;
    // adding comment in main branch to arrise conflict....
    // this is another comment adding for conflict...
    return 0;
} 
