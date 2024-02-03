//Nhập vào toạ độ 3 điểm A, B và C. Hãy xác định loại của tam giác này
//(vuông, cân, đều, thường, không phải tam giác)
#include <iostream>
#include <math.h>
using namespace std;

int main()  
{
    int a, b, c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    if (a < b + c && b < a + c && c < a + b)
    {
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
        {
            cout << "Day la tam giac vuong.";
        }
        else if (a == b && b == c)
        {
            cout << "Day la tam giac deu.";
        }
        else if (a == b || a == c || b == c)
        {
            cout << "Day la tam giac can.";
        }
        else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b)
        {
            cout << "Day la tam giac tu.";
        }
        else
        {
            cout << "Day la tam giac nhon.";
        }
    }
    else
        cout << "Ba canh a, b, c khong phai la ba canh cua mot tam giac.";
    return 0;
}
