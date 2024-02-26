#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    string name;
    int id;

public:
    Student(const string& n, int i) : name(n), id(i) {}
};

class Sports : public Student {
protected:
    int s_grade;

public:
    Sports(const string& n, int i, int s) : Student(n, i), s_grade(s) {}
};

class Exam : public Student {
protected:
    int e_grade;

public:
    Exam(const string& n, int i, int e) : Student(n, i), e_grade(e) {}
};

class Results : public Sports, public Exam {
private:
    string final_result;

public:
    Results(const string& n, int i, int s, int e, const string& result)
        : Sports(n, i, s), Exam(n, i, e), final_result(result) {}

    void display() {
    cout << "Name: " << Sports::name << endl;
    cout << "ID: " << Sports::id << endl;   
    cout << "Sports Grade: " << s_grade << endl;
    cout << "Exam Grade: " << e_grade << endl;
    cout << "Final Result: " << final_result << endl;
}
};


int main() {
    Results result("John", 123, 90, 85, "Pass");
    result.display();

    return 0;
}

