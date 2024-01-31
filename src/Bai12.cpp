// Nhập số n rồi in ra n số nguyên tố đầu tiên
//Yêu cầu:
//- viết hàm int nhap() để nhập n nguyên lớn hơn 1
//- viết hàm bool laSNT(int x) kiểm tra x có phải là SNT không!
#include <iostream>
#include <cmath>

using namespace std;

int input()
{
    int a;
    do
    {
        cout << "Nhap so nguyen n: ";
        cin >> a;
        if (a < 1)
        {
            cout << "Khong hop le vui long nhap lai!";
        }
    } while (a <= 1);
    return a;
}

bool laSNT(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i <= x / 2; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    int a = input();
    cout << "N " << a << " so nguyen to dau tien la: ";
    int dem = 0;
    for (int i = 2; dem < a; i++)
    {
        if (laSNT(i))
        {
            cout << i << " ";
            dem++;
        }
    }
    cout << endl;

    return 0;
}
