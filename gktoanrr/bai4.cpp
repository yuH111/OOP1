#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int check(int g) {
    string dem;
    for (int i = 1; dem.length() < 100000; ++i) {
        dem += to_string(i);
    }

    int t = dem.find(to_string(g));
    if (t != string::npos) {
        cout << "Vi tri xuat hien: " << t + 1 << endl;
        return t + 1; 
    } else {
        cout << "Khong tim thay so " << g << endl;
        return -1; 
    }
}

int main() {
    int g;
    cout << "Nhap so can tim: ";
    cin >> g;

    int kq = check(g); 
    

    return 0;
}
