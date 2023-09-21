#include <iostream>
#include <cmath>

int main() {
    int n = 10; // Replace with your desired value of n
    int k = 5;  // Replace with your desired value of k
    int m = 3;  // Replace with your desired value of m

    // Statement 1: (n+k)^m = ??(n^m)
    int statement1 = pow(n + k, m);
    int theta_n_m = pow(n, m);

    if (statement1 == theta_n_m) {
        std::cout << "(n+k)^m is in ??(n^m)" << std::endl;
    } else {
        std::cout << "(n+k)^m is NOT in ??(n^m)" << std::endl;
    }

    // Statement 2: 2^(n+1) = ??(2^n)
    int statement2 = pow(2, n + 1);
    int big_o_2_n = pow(2, n);

    if (statement2 <= big_o_2_n) {
        std::cout << "2^(n+1) is in ??(2^n)" << std::endl;
    } else {
        std::cout << "2^(n+1) is NOT in ??(2^n)" << std::endl;
    }

    // Statement 3: 2^n = ??(2^n)
    int statement3 = pow(2, n);

    if (statement3 <= big_o_2_n) {
        std::cout << "2^n is in ??(2^n)" << std::endl;
    } else {
        std::cout << "2^n is NOT in ??(2^n)" << std::endl;
    }

    // Statement 4: vlog(n) = ??(log log(n))
    double sqrt_log_n = sqrt(log(n));
    double log_log_n = log(log(n));

    if (sqrt_log_n <= log_log_n) {
        std::cout << "vlog(n) is in ??(log log(n))" << std::endl;
    } else {
        std::cout << "vlog(n) is NOT in ??(log log(n))" << std::endl;
    }

    return 0;
}
