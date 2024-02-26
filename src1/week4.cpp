 #include<iostream>
#include<math.h>

using namespace std;

class Rectangle{
    private:
        double chieudai;
        double chieurong;
      //  double bankinh;
    public:
        void input(){
            cout <<"Nhap vao Chieu Dai hinh chu nhat: ";
                cin >> chieudai;
            cout <<"Nhap vao Chieu Rong hinh chu nhat";
                cin >> chieurong;
        }
        void output(){
            cout <<"Chieu dai Hinh Chu Nhat la: " << chieudai;
            cout <<"Chieu rong Hinh Chu Nhat la: " << chieurong <<endl;
        }   
        void dienTich(){
            double d = chieudai *chieudai;
                cout <<"Dien tich HCN la: " << d;
        }
        
};
class Circle{
    private:
        double bankinh;
    public:
        void intput(){
            cout <<"Nhap vao ban kinh HT: " <<endl;
                cin >>bankinh;
        }
        void output(){
            cout <<"Ban Kinh HT la: " << bankinh;
        }
        void dienTich(){
            double g = bankinh * 3.1416;
        cout <<"Dien tich HT la: " << g;
            }
};
main(){
Rectangle h;
    h.input();
    h.output();
    h.dienTich();
Circle k;
    k.intput();
    k.output();
    k.dienTich();

}
