// Nhập một số nguyên và kiểm tra số đó có phải là số đối xứng hay không?
#include <iostream>
using namespace std;
void intput(int a)
{
    cout << "Nhap vao so nguyen can kiem tra: ";
    cin >> a;
}
bool sosoiXung(int b)
{
    int sonhapvao = b;
    int sodaonguoc = 0;

    while (b > 0)
    {
        int digit = b % 10;
        sodaonguoc = sodaonguoc * 10 + digit;
        b /= 10;
    }
    return sonhapvao == sodaonguoc;
}

int main()
{
    int a;
    intput(a);
    if (sosoiXung(a))
    {
        cout << a << " la so doi xung.";
    }
    else
    {
        cout << a << "\n khong phai la so doi xung.";
    }

    return 0;
}
