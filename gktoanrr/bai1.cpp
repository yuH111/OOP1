#include <iostream>
#include <cmath>
bool isArmstrong(int num) {
    int temp = num,n = 0;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    int sum = 0;
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }
    return (sum == num);
}
void printArmstrongNumbers(int n) {
    int count = 0;
    int num = 0;
    while (count < n) {
        if (isArmstrong(num)) {
            std::cout << num << " ";
            count++;
        }
        num++;
    }
}
int main() {
    int n;
    std::cin >> n;
    printArmstrongNumbers(n);
    std::cout << std::endl;
    return 0;
}