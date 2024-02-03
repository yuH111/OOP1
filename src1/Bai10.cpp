// 0.Viết chương trình tìm số có 3 chữ số sao cho tổng các lập phương của chúng
// bằng chính nó
#include <iostream>
#include <math.h>
using namespace std;
int tinhLapPhuong(int a)
{
    return a * a * a;
}
bool kiemTraSo(int a)
{
    int temp = a;
    int tongLapPhuong = 0;

    while (temp > 0)
    {
        int soA = temp % 10;
        tongLapPhuong += tinhLapPhuong(soA);
        temp /= 10;
    }
    return a == tongLapPhuong;
}
int main()
{
    cout << "So co 3 chu so sao cho tong lap phuong cua chung bang chinh no la: ";
    for (int i = 100; i <= 200; ++i)
    {
        if (kiemTraSo(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
