#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    int ans = 1;
    if(n < 1)return ans = max(0 , 1);
    return ans += fibo(n-1)+fibo(n-2);
    return ans;
}

int main(){
    // this is another comment in main branch..
    // this is the experimental-branch
    // we have to calculate fibonacci serise...

    // basic program for calculating factorial
    // this is an another test in the experimental branch
    int n;
    cin>>n;
    int factorial = 1;
    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    cout<<factorial<<endl;
    // this is another branch from the github and branch name is feature-branch
    // this is another branch from the github
    int num = fibo(n);
    cout<<num<<endl;
    // adding comment in main branch to arrise conflict....
    // this is another comment adding for conflict...
    return 0;
} 
