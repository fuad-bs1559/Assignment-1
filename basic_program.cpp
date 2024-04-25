#include<bits/stdc++.h>
using namespace std;

int nthPrime(int n) {
    std::vector<bool> isPrime(1000000, true); // Assuming the prime number won't exceed 1000000
    int count = 0;
    for (int i = 2; i < isPrime.size(); ++i) {
        if (isPrime[i]) {
            ++count;
            if (count == n) {
                return i;
            }
            for (int j = i * 2; j < isPrime.size(); j += i) {
                isPrime[j] = false;
            }
        }
    }
    return -1; // Return -1 if the nth prime is not found
}

int main(){
    // this is another comment in main branch..
    // this is the experimental-branch
    // we have to calculate fibonacci serise...

    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    
    int result = nthPrime(n);
    if (result != -1) {
        std::cout << "The " << n << "th prime number is: " << result << std::endl;
    } else {
        std::cout << "The " << n << "th prime number is not found within the given limit." << std::endl;
    }
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
