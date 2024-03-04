#include<bits/stdc++.h>
using namespace std;
class Student{
	string name;
	int id;
	public:
		Student(string name, int id){
			this->name = name;
			this->id =id;
		}
		void setName(string name){
			this->name = name;
		} 
		string getName(){
			return name;
		}
		void setId(int id){
			this->id = id;
		}
		int getId(){
			return id;
		}
		void display(){
			cout<<"Name: "<<name<<endl;
			cout<<"ID: "<<id<<endl;
		}
};
class Sports:public Student{
	int s_grade;
	public:
		Sports(string name, int id, int s_grade):Student(name, id){
			this->s_grade = s_grade;
		}
		int getSport(){
			return s_grade;
		}
		void setSport(int sport){
			this->s_grade = s_grade; 
		}
		void display(){
			Student::display();
			cout<<"Sport Grade: "<<s_grade<<endl;
		}
};
class Exam: public Student{
	int e_grade;
	public:
		Exam(string name, int id, int e_grade):Student(name, id){
			this->e_grade = e_grade;
		}
		int getExam(){
			return e_grade;
		}
		void setExam(){
			this->e_grade = e_grade;
		}
		void display(){
			cout<<"Exam Grade: "<<e_grade<<endl;
		}
};
class Result: public Sports, public Exam{
	string final_result;
	public:
		Result(string name, int id, int s_grade, int e_grade, string final_result): Sports(name, id, s_grade), Exam(name, id, e_grade){	
		           this->final_result = final_result;
		}
		void display(){
			Sports::display();
			Exam::display();
			cout<<"Final result: "<<final_result;
		}
};
main(){
	Result obj("huy",123,4,5,"pass");
	obj.display();
}

