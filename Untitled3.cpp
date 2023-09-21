#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n = 10; // You can change the value of n or k as needed
    int k = 5;
    int m = 2;

    // Statement 1: (n+k)^m = T(n^m)
    int result1 = pow(n + k, m);
    int result2 = pow(n, m);
    cout << "Statement 1: (" << n << "+" << k << ")^" << m << " = " << result1 << " and T(" << n << "^" << m << ") = " << result2 << endl;
    
    // Statement 2: 2^(n+1) = O(2^n)
    int result3 = pow(2, n + 1);
    int result4 = pow(2, n);
    cout << "Statement 2: 2^(" << n << "+1) = " << result3 << " and O(2^" << n << ") = " << result4 << endl;
    
    // Statement 3: 2^n = O(2^n)
    int result5 = pow(2, n);
    cout << "Statement 3: 2^" << n << " = " << result5 << " and O(2^" << n << ") = " << result5 << endl;
    
    // Statement 4: vlog(n) = O(log log(n))
    double result6 = sqrt(log(n));
    double result7 = log(log(n));
    cout << "Statement 4: vlog(" << n << ") = " << result6 << " and O(log log(" << n << ")) = " << result7 << endl;
    
    return 0;
}
