// Hãy viết chương trình tìm số Fibonacci thứ n
#include <iostream>
#include <cmath>

using namespace std;

void input(int n)
{
    cout << "Nhap so n: ";
    cin >> n;
}

int timSoFibonacci(int &n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; ++i)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main()
{
    int n;
    input(n);
    int ketQua = timSoFibonacci(n);
    cout << "So Fibonacci thu " << n << " la: " << ketQua << endl;

    return 0;
}
