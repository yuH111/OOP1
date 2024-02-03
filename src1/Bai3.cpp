// Viết chương trình giải phương trình bậc 2: Ax2+ Bx + C =0

#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    double Delta = b * b - 4 * a * c;
    cout << "Delta cua phuong trinh la: " << Delta << ".";
    if (Delta >= 0)
    {
        double x1 = (-b + sqrt(Delta)) / (2 * a);
        double x2 = (-b - sqrt(Delta)) / (2 * a);
        cout << " Phuong trinh co 2 nghiem phan biet: ";
        cout << "\n X1 = " << x1 << ".";
        cout << "\n X2 = " << x2 << ".";
    }
    else if (Delta < 0)
    {
        cout << "\n Phuong trinh vo nghiem!";
    }
    else if (Delta == 0)
    {
        double x = -b / 2 * a;
        cout << "\n Phuong trinh co nghiem kep = " << x << ".";
    }
    else
    {
        return 0;
    }
}