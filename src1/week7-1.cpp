#include<iostream>
#include<math.h>

using namespace std;

class Student{
    private:
        string school;
        string name;
        int id;
    public:
        Student(string school, string name, int id){
            this->name = name;
            this->id = id;
            this->school = school;
        }
        void setName(){
        return name;
        }
        void setID(){
            return id;
        }
        void setSchool(){
            return school;
        }

};