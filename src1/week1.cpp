#include <iostream>
#include <math.h>

using namespace std;
void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number a[" << i << "]: ";
        cin >> a[i];
    }
}
void output(int a[], int n)
{
    cout << "List Number you intput: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void checK(int a[], int n)
{
    int f;
    cout << "\nEnter number you need check: ";
    cin >> f;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == f)
        {
            cout << " 1";
            break;
        }
        if (a[i] != 1)
        {
            cout << " -1";
            break;
        }
    }
}
void checknumBig(int a[], int n)
{
    int max;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << "\nNumber max: " << max;
}
void sortNum(int a[], int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    cout << "\nArray sorted: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
class Rectangle{
   private:
    int a, b;

public:
    void input() {
        cout << "\nEnter length: ";
        cin >> a;
        cout << "Enter breadth: ";
        cin >> b;
    }

    void output() {
        cout << "\nLength: " << a;
        cout << "\nBreadth: " << b;
    }

    double displayArea() {
        cout << "\nDisplay Area: " << a * b;
    }

    void eDit() {
        cout << "\nEnter new length: ";
        cin >> a;
        cout << "Enter new breadth: ";
        cin >> b;
    }
};
main()
{
    int a[1000];
    //
    int n;
    cout << "Enter many Number do you want: ";
    cin >> n;
    input(a, n);
    output(a, n);
    checK(a, n);
    checknumBig(a, n);
    sortNum(a,n);
    Rectangle r;
        r.input();
        r.output();
        r.displayArea();
        r.eDit();
}
