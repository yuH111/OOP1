#include <iostream>
#include <math.h>
using namespace std;

void input(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Mang thu a[" << i << "]: ";
        cin >> a[i];
    }
}

void ouput(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void searchNumber(int a[], int n) {
    int d;
    cout << "\nEnter number for search: ";
    cin >> d;
    int f = -1;
    for (int i = 0; i < n; i++) {
        if (d == a[i]) {
            f = 1;
            break;
        }
    }
    cout << f;
}

void searchMaxnumber(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    cout << "\n So lon nhat trong mang la: " << max;
}

void sortNumber(int a[], int n) {
    int sort;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                sort = a[i];
                a[i] = a[j];
                a[j] = sort;
            }
        }
    }
    cout << "\nMang sau khi sap xep la: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

class Rectangle {
private:
    double a, b;

public:
    void input() {
        cout << "\nNhap vao chieu dai: ";
        cin >> a;
        cout << "Nhap vao chieu rong: ";
        cin >> b;
    }

    void output() {
        cout << "\n Chieu dai cua HCN la: " << a;
        cout << " Chieu rong cua HCN la: " << b;
    }

    void chuVi() {
        cout << "\n Chu vi HCN la: " << (a + b) * 2;
    }

    void dienTich() {
        cout << "\n Dien tich HCN la: " << a * b;
    }
};

int main() {
    int a[100];
    int n;
    cout << "Nhap vao so luong phaan tu mang: ";
    cin >> n;
    input(a, n);
    ouput(a, n);
    searchNumber(a, n);
    searchMaxnumber(a, n);
    sortNumber(a, n);

    Rectangle d;
    d.input();
    d.output();
    d.chuVi();
    d.dienTich();

    return 0;
}
