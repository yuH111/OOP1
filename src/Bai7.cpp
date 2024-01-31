//Viết chương trình nhập vào hai số nguyên a, b và tìm ước số chung lớn nhất và
//bội số chung nhỏ nhất của hai số đó
#include<math.h>
#include<iostream>

using namespace std;

void intput( int a,int b){
        cout <<"Nhap a: ";
            cin >>a;
        cout <<"Nhap b: ";
            cin >> b;
}
double ucLn( int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
double bcNn( int a, int b){
    return (a * b)/ ucLn(a,b);
}
main (){
    int a,b;
    intput(a,b);
   cout <<"Uoc chung lon nhat cua a va b la:" <<  ucLn(a,b) << ".\n";
    cout <<"Boi chung nho nhat cua a va b la:"<< bcNn(a,b)  <<" . ";
}