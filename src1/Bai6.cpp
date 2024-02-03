//Tìm số lớn nhất của 5 số
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cout << "Nhap a: ";
        cin >> a;
    cout << "Nhap b: ";
        cin >> b;
    cout << "Nhap c: ";
        cin >> c;
    cout << "Nhap d: ";
        cin >> d;
    cout << "Nhap e: ";
        cin >> e;
    int max = a;
    if (b > max)
    {
        max = b;
    }
    else if (c > max)
    {
        max = c;
    }
    else if (d > max)
    {
        max = d;
    }
    else if (e > max)
    {
        max = e;
    }
    else
    {
        return 0;
    }
    cout << "So lon nhat la: " << max << ".";
}
