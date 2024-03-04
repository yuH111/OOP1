#include<bits/stdc++.h>
using namespace std;
class Shape{
	protected:
		int canh1;
		int canh2;
	public:
	
		void GetData(){
			cout<<"Nhap canh 1: "; cin >>canh1;
			cout<<"Nhap canh 2: "; cin >>canh2;
		}
		virtual void display(){
//			ham ao ghi de` len cac lop con
		}
};
class Riangle : public Shape{
	public:
		void display(){
			double dt = 0.5*canh1*canh2;
			cout<<"Dien tich hinh tam giac: "<<dt;
		}
};
	
class Rectangle : public Shape{
	public:
		void display(){
			double dt = canh1 * canh2;
			cout<<"Dien tich hinh chu nhat: "<<dt;
		}
};
main(){
	Riangle shape1;
	shape1.GetData();
	shape1.display();
	
	Rectangle shape2;
	shape2.GetData();
	shape2.display();
}
