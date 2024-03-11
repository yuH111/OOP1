#include<iostream>
#include<math.h>

using namespace std;

class Shape {
public:
    virtual void input() = 0;
    virtual void  getArea() = 0;
    virtual void getVolume() = 0;
};

class Cube : public Shape {
private:
    double a;
    double b;
    double c;

public:
    void getA(double a){
        this->a = a;
    }
    void getB(double b){
        this->b = b;
    }
    void getC(double c){
        this->c = c;
    }
    void setA(double a){
        this->a = a;
    }
    void setB(double b){
        this->b = b;
    }
    void setC(double c){
        this->c = c;
    }
    void input(){
        cout <<"-------------Cube------------------" << endl;
        cout <<"Nhap a: "; 
        cin >> a;
        cout <<"Nhap b: "; 
        cin >> b;
        cout <<"Nhap c: "; 
        cin >> c;
    }
    double getArea(){
        return  2 * (a * b + a * c + b * c);
    }
    double getVolume(){
        return a * b * c;
    }
};

class Circle : public Shape {
private: 
    double radius;

public:
    void getRadius(){
        this->radius = radius;
    }
    void setRadius(double radius){
        this->radius = radius;
    }

    void input(){
       cout <<"-------------CirCle------------------" << endl;
        cout <<"Nhap vao ban kinh: " ;
        cin >> radius;
    }
    
    double getArea(){
        return radius * radius * 3.1416;
    }
    double getVolume(){
        return  2 * radius * 3.1416;
    }
};

class ShapeList {
Circle c;
Cube x;
public:
    void input(){
        int choice;
        while(true)
        {
            cout <<"-------------------Menu------------------" << endl;
            cout <<"1.Cube" << endl;
            cout <<"2.Circle" << endl;
            cout <<"0.Thoat" << endl;
            cout <<"Nhap lua chon: ";
            cin >> choice;
            if ( choice == 1){
                x.input();
                cout << "Dien tich hinh lap phuong: " << x.getArea() << endl;
                cout << "The tich hinh lap phuong: " << x.getVolume() << endl;
            }
            else if( choice == 2){  
                c.input();
                cout << "Dien tich hinh tron: " << c.getArea() << endl;
                cout << "Chu vi hinh tron: " << c.getVolume() << endl;
            }
            else if (choice == 0) {
                cout <<"Thoat chuong trinh!" << endl;
                break;
            }
            else {
                cout <<"Lua chon khong hop le!" << endl;
            }
        }
    }
    void sort(){
        
    }
};

int main() {
    ShapeList shapeList;
    shapeList.input();
    return 0;
}
