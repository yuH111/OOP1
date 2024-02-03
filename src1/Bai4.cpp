//Nhập 5 số nguyên và in ra theo thứ tự tăng dần
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    cout << "Nhap vao so luong so ma ban muon sap xep: ";
    cin >> a;
    int so[a];
    for (int i = 0; i < a; ++i)
    {
        cout << "So thu " << i + 1 << ": ";
        cin >> so[i];
    }
    sort(so, so + a);
    cout << "Cac so duoc sap xep theo thu tu tang dan la: ";
    for (int i = 0; i < a; ++i)
    {
        cout << so[i] << " "; //<<".";
    }
    return 0;
}
