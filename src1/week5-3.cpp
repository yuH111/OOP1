#include <iostream>
#include <string>
using namespace std;

class bankAccount {
private:
    string name;
    string numAccount;
    string loaiTk;
    double soDu;
    static double laiSuat;

public:
    bankAccount() : soDu(0) {}

    bankAccount(const string &name, const string &numAcc, const string &loaiTk, double soDu)
        : name(name), numAccount(numAcc), loaiTk(loaiTk), soDu(soDu) {}

    bankAccount(const bankAccount &other)
        : name(other.name), numAccount(other.numAccount),
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
    static void laiNH() {
            cout << "Lai suat: " << laiSuat << "%" << endl;
        }
    void publicInformation() {
        cout << "-------THONG TIN VE TK--------------" << endl;
        cout << "Ten: " << name << endl;
        cout << "STK: " << numAccount << endl;
        cout << "Loai TK: " << loaiTk << endl;
        cout << "So DU: " << soDu << endl;
        cout << "Lai suat gui TK: " << laiNH << endl;
    }

    
};

double bankAccount::laiSuat = 5.0; // Example value for interest rate

int main() {
    bankAccount g;
  /*  g.publicInformation();
    */
    bankAccount acc2("Quang Huy", "06112004", "Savings", 1000.0);
    acc2.publicInformation();

    bankAccount acc3 = acc2;
    acc3.publicInformation();

    bankAccount::laiNH();
    
    return 0;
}
