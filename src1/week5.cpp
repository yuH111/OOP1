#include <iostream>
#include <cstring>
using namespace std;
/*
class Complex
{
private:
    double real;
    double imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(double r, double i) : real(r), imag(i) {}

    Complex(const Complex &other) : real(other.real), imag(other.imag) {}

    void ouput()
    {
        cout << "Phan thuc: " << real << ", Phan ao: " << imag << std::endl;
    }
};*/
//2.DateTime
/*class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    Time(const Time &other) : hours(other.hours), minutes(other.minutes), seconds(other.seconds) {}

    void ouput()
    {
        cout << "Time: " << hours << ":" << minutes << ":" << seconds << std::endl;
    }
};*/
class bankAccount
{
private:
    string name;
    double numAccount;
    string loaiTk;
    double soDu;
    double laiSuat;
public:    
    bankAccount() : soDu(0) {}

    bankAccount(const string &name, const string &numAcc, const string &loaiTk, double soDu)
        : depositorName(name), loaiTk(numAcc), loaiTk(loaiTk), soDu(soDu) {}

    bankAccount(const bankAccount &other)
        : depositorName(other.depositorName), numAccount(other.numAccount),
          loaiTk(other.loaiTk), soDu(other.soDu) {}
    void nopTien(double amount) {
        soDu += amount;
    }
    void rutTien(double amount) {
        const double minsoDu = 100.0; 
        if (soDu - amount >= minsoDu) {
            soDu -= amount;
        } else {
            cout << "So du khong du!" << endl;
        }
    }
    void publicInformation(string name,double numAccount,string loaiTk, double soDu ){
        cout <<"-------THONG TIN VE TK--------------";
        cout <<"Ten: " << name <<endl;
        cout <<"STK: " << numAccount << end;
        cout <<"Loai TK: " << loaiTk;
        cout <<"SoDU: " << soDu;
        cout <<"Lai suat gui TK: " << laiSuat;
    }
};

class String
{
private:
    char *str;

public:
    String() : str(nullptr) {}

    String(const char *s)
    {
        if (s != nullptr)
        {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
        else
        {
            str = nullptr;
        }
    }

    String(const String &other)
    {
        if (other.str != nullptr)
        {
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        else
        {
            str = nullptr;
        }
    }

    void ouput()
    {
        if (str != nullptr)
        {
            cout << "Chu?i: " << str << std::endl;
        }
        else
        {
            cout << "Chu?i l� null" << std::endl;
        }
    }

    ~String()
    {
        delete[] str;
    }

    void changeCase()
    {
        int length = strlen(str);
        for (int i = 0; i < length; ++i)
        {
            if (islower(str[i]))
            {
                str[i] = toupper(str[i]);
            }
            else if (isupper(str[i]))
            {
                str[i] = tolower(str[i]);
            }
        }
    }

    void reverse()
    {
        int length = strlen(str);
        for (int i = 0; i < length / 2; ++i)
        {
            char temp = str[i];
            str[i] = str[length - i - 1];
            str[length - i - 1] = temp;
        }
    }
};
