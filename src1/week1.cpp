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

main()
{
    int a[1000];
    int n;
    cout << "Enter many Number do you want: ";
    cin >> n;
    input(a, n);
    output(a, n);
    checK(a, n);
    checknumBig(a, n);
}
