#include <iostream>
#include <cmath>

using namespace std;

long long sum_to_n(long long n) {
    return (n * (n + 1)) / 2;
}

long long sum_integers(double a, double b) {
    long long rounded_a = ceil(a);
    long long rounded_b = floor(b);

    long long sum_b = sum_to_n(rounded_b);
    long long sum_a_minus_1 = sum_to_n(rounded_a - 1);
    return sum_b - sum_a_minus_1;
}

int main() {
    double a, b;
    cin >> a;
    cin >> b;

    long long result = sum_integers(a, b);
    cout << result << endl;

    return 0;
}