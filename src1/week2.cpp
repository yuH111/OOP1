#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int ID;
    double GPA;
    int numStudents;

public:
    void input() {
        cout << "Nhap vao TEN sv: ";
        cin >> name;
        cout << "Nhap vao ID sv: ";
        cin >> ID;
        cout << "Nhap vao GPA sv: ";
        cin >> GPA;
    }

    void output() {
        cout << "Ten sv: " << name << endl;
        cout << "ID sv: " << ID << endl;
        cout << "GPA sv: " << GPA << endl;
    }

    void aStudents() {
        cout << "Nhap vao so luong sinh vien can nhap: ";
        cin >> numStudents;

        Student *students = new Student[numStudents];

        for (int i = 1; i < numStudents; i++) {
            cout << "\nNhap thong tin cho sinh vien thu " << i  << ":" << endl;
            students[i].input();
        }

        for (int i = 1; i < numStudents; i++) {
            cout << "\nThong tin cua sinh vien thu " << i  << ":" << endl;
            students[i].output();
        }
    }

    void ediT() {
        int choice;
        do {
            cout << "Chon sinh vien ma ban muon thay doi thong tin (nhap 0 de ket thuc): ";
            cin >> choice;
            if (choice > 0 && choice <= numStudents) {
                cout << "Vui long thay doi thong tin sv thu " <<choice << endl;
            } else if (choice != 0) {
                cout << "Sinh vien khong ton tai. Vui long nhap lai." << endl;
            }
        } while (choice != 0);
    }//
};

int main() {
    Student g;
    g.aStudents();
    g.ediT();
    return 0;
}
