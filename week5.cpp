#include <iostream>
#include <cstring>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor mac dinh
    Complex() : real(0), imag(0) {}

    // Constructor voi tham so
    Complex(double r, double i) : real(r), imag(i) {}

    // Constructor sao chep
    Complex(const Complex& other) : real(other.real), imag(other.imag) {}

    // Phuong thuc hien thi
    void display() {
        cout << "Phan thuc: " << real << ", Phan ao: " << imag << endl;
    }
};

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor mac dinh
    Time() : hours(0), minutes(0), seconds(0) {}

    // Constructor voi tham so
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Constructor sao chep
    Time(const Time& other) : hours(other.hours), minutes(other.minutes), seconds(other.seconds) {}

    // Phuong thuc hien thi
    void display() {
        cout << "Thoi gian: " << hours << ":" << minutes << ":" << seconds << endl;
    }
};

class BankAccount {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;
    static double interestRate;

public:
    // Constructor mac dinh
    BankAccount() : balance(0) {}

    // Constructor voi tham so
    BankAccount(const string& name, const string& accNum, const string& type, double bal)
        : depositorName(name), accountNumber(accNum), accountType(type), balance(bal) {}

    // Constructor sao chep
    BankAccount(const BankAccount& other)
        : depositorName(other.depositorName), accountNumber(other.accountNumber),
          accountType(other.accountType), balance(other.balance) {}

    // Phuong thuc de gui tien
    void deposit(double amount) {
        balance += amount;
    }

    // Phuong thuc de rut tien sau khi kiem tra so du toi thieu
    void withdraw(double amount) {
        const double minBalance = 100.0; // So du toi thieu yeu cau
        if (balance - amount >= minBalance) {
            balance -= amount;
        } else {
            cout << "So du khong du!" << endl;
        }
    }

    // Phuong thuc hien thi chi tiet tai khoan
    void displayDetails() {
        cout << "Ten nguoi gui: " << depositorName << endl;
        cout << "So tai khoan: " << accountNumber << endl;
        cout << "Loai tai khoan: " << accountType << endl;
        cout << "So du: " << balance << endl;
    }

    // Ham tinh de hien thi lai suat
    static void displayInterestRate() {
        cout << "Lai suat: " << interestRate << "%" << endl;
    }
};

double BankAccount::interestRate = 5.0; // Gia tri vi du

class IntArr {
private:
    int* arr;
    int size;

public:
    IntArr() : arr(NULL), size(0) {}

    IntArr(int* array, int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = array[i];
        }
    }
    IntArr(const IntArr& other) : size(other.size) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }
    void display() {
        cout << "Noi dung mang: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    bool search(int element) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == element) {
                return true;
            }
        }
        return false;
    }
    bool compare(const IntArr& other) {
        if (size != other.size) {
            return false;
        }
        for (int i = 0; i < size; ++i) {
            if (arr[i] != other.arr[i]) {
                return false;
            }
        }
        return true;
    }

    // Destructor
    ~IntArr() {
        delete[] arr;
    }
};

class String {
private:
    char* str;

public:
    // Constructor mac dinh
    String() : str(NULL) {}

    // Constructor voi tham so
    String(const char* s) {
        if (s != NULL) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        } else {
            str = NULL;
        }
    }

    // Constructor sao chep
    String(const String& other) {
        if (other.str != NULL) {
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        } else {
            str = NULL;
        }
    }

    // Phuong thuc hien thi
    void display() {
        if (str != NULL) {
            cout << "Chuoi: " << str << endl;
        } else {
            cout << "Chuoi la null" << endl;
        }
    }

    // Destructor
    ~String() {
        delete[] str;
    }

    // Phuong thuc thay doi kieu chu
    void changeCase() {
        int length = strlen(str);
        for (int i = 0; i < length; ++i) {
            if (islower(str[i])) {
                str[i] = toupper(str[i]);
            } else if (isupper(str[i])) {
                str[i] = tolower(str[i]);
            }
        }
    }

    // Phuong thuc dao nguoc chuoi
    void reverse() {
        int length = strlen(str);
        for (int i = 0; i < length / 2; ++i) {
            char temp = str[i];
            str[i] = str[length - i - 1];
            str[length - i - 1] = temp;
        }
    }
};

int main() {
    // Cac doi tuong Complex
    Complex c1; // Constructor mac dinh
    c1.display();

    Complex c2(3.5, 2.0); // Constructor voi tham so
    c2.display();

    Complex c3 = c2; // Constructor sao chep
    c3.display();

    // Cac doi tuong Time
    Time t1; // Constructor mac dinh
    t1.display();

    Time t2(10, 30, 45); // Constructor voi tham so
    t2.display();

    Time t3 = t2; // Constructor sao chep
    t3.display();

    // Cac doi tuong BankAccount
    BankAccount acc1; // Constructor mac dinh
    acc1.displayDetails();

    BankAccount acc2("John Doe", "123456789", "Savings", 1000.0); // Constructor voi tham so
    acc2.displayDetails();

    BankAccount acc3 = acc2; // Constructor sao chep
    acc3.displayDetails();

    // Hien thi lai suat
    BankAccount::displayInterestRate();

    // Cac doi tuong IntArr
    int arr1[] = {1, 2, 3, 4, 5};
    IntArr arrObj1(arr1, 5); // Constructor voi tham so
    arrObj1.display();

    IntArr arrObj2 = arrObj1; // Constructor sao chep
    arrObj2.display();

    // Tim kiem trong mang
    cout << "Tim kiem 3 trong arrObj1: " << (arrObj1.search(3) ? "Tim thay" : "Khong tim thay") << endl;
    cout << "Tim kiem 6 trong arrObj1: " << (arrObj1.search(6) ? "Tim thay" : "Khong tim thay") << endl;

    // So sanh cac mang
    cout << "Co phai arrObj1 va arrObj2 bang nhau? " << (arrObj1.compare(arrObj2) ? "Co" : "Khong") << endl;

    // Cac doi tuong String
    String str1; // Constructor mac dinh
    str1.display();

    String str2("Hello"); // Constructor voi tham so
    str2.display();

    String str3 = str2; // Constructor sao chep
    str3.display();

    // Thay doi kieu chu va dao nguoc
    str2.changeCase();
    cout << "Sau khi thay doi kieu chu: ";
    str2.display();

    str3.reverse();
    cout << "Sau khi dao nguoc: ";
    str3.display();

    return 0;
}

