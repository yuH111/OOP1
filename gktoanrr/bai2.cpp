#include <iostream>
using namespace std;
int main()
{
    long long a;
    cin >> a;
    long long years = a / 365;
    long long remainingDays = a % 365;
    long long months = remainingDays / 30;
    long long days = remainingDays % 30;
    if (years > 0)
    {
        cout << years << " years" << endl;
    }
    if (months > 0)
    {
        cout << months << " months" << endl;
    }
    if (days > 0)
    {
        cout << days << " days" << endl;
    }
    return 0;
}