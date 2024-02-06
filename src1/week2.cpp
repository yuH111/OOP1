#include <iostream>
#include <string> 

using namespace std;

class Student {
private:
    string name; 
    int ID;
    double GPA;
public:
    void input() { 
        cout << "Enter name Student: ";
        cin >> name;
        cout << "Enter ID Student: ";
        cin >> ID;
        cout << "Enter GPA Student: ";
        cin >> GPA;
    }

    void output() { 
        cout << "Student name: " << name << endl;
        cout << "ID Student: " << ID << endl;
        cout << "GPA Student: " << GPA << endl;
    }

    void editStudent() { 
            cout <<"Enter name Student you want to edit: ";
                cin >> name;
            cout <<"Enter ID Student you want to edit: ";
                cin >> ID;
            cout <<"Enter GPA Student you want to edit: ";
                cin >> GPA;

      /*  int choice;
        do {
            cout << "\nEnter noi dung u need edit: " << endl;
            cout << "1. Name Student" << endl;
            cout << "2. ID Student" << endl;
            cout << "3. GPA Student" << endl;
            cout << "0. Exit" << endl; 

            cin >> choice; 

            switch (choice) {
            case 1:
                cout << "Enter Name Student you want to edit: ";
                cin >> name;
                break;
            case 2:
                cout << "Enter ID Student you want to edit: ";
                cin >> ID;
                break;
            case 3:
                cout << "Enter GPA Student you want to edit: ";
                cin >> GPA;
                break;
            default:
                cout << "Invalid choice! Please enter again." << endl;
                break;
            }
        } while (choice != 0);*/
    }
};
//
//
//

int main() { 
    Student a;
    a.input();
    a.output();
    a.editStudent();

    return 0;
}
