#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) // Base case: if n is 0 or 1, return n
        return n;
    else // Recursive case: calculate Fibonacci(n-1) + Fibonacci(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    // lets try to use revert with fibonacci code..
    int n;
    std::cout << "Enter the value of n to calculate Fibonacci(n): ";
    std::cin >> n;

    // Calculate and print Fibonacci(n)
    std::cout << "Fibonacci(" << n << ") = " << fibonacci(n) << std::endl;

    return 0;
    return 0;
} 
