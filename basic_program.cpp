#include<bits/stdc++.h>
using namespace std;
int main(){

    // basic program for calculating factorial
    int n;
    cin>>n;
    int factorial = 1;
    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    cout<<factorial<<endl;
    // this is main file basic program..
    return 0;
} 
