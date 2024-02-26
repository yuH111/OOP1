#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

class String {
private:
    char *str;

public:
    String() : str(nullptr) {}

    String(const char *s) {
        if (s != nullptr) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        } else {
            str = nullptr;
        }
    }

    String(const String &other) {
        if (other.str != nullptr) {
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        } else {
            str = nullptr;
        }
    }

    void output() {
        if (str != nullptr) {
            cout << "Chuoi: " << str << std::endl;
        } else {
            cout << "Chuoi la null" << std::endl;
        }
    }

    ~String() {
        delete[] str;
    }

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
    String str1;
    str1.output();
    String str2("Hello");
    str2.output();
    String str3 = str2;
    str3.output();
    str2.changeCase();
    cout << "Sau khi thay doi kieu chu: ";
    str2.output();
    str3.reverse();
    cout << "Sau khi dao nguoc: ";
    str3.output();
    return 0;
}
