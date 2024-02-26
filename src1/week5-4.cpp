class IntArr {
private:
    int* arr;
    int size;

public:
    IntArr() : arr(NULL), size(0) {}

    IntArr(int* array, int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = array[i];
        }
    }
    IntArr(const IntArr& other) : size(other.size) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }
    void display() {
        cout << "Noi dung mang: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    bool search(int element) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == element) {
                return true;
            }
        }
        return false;
    }
    bool compare(const IntArr& other) {
        if (size != other.size) {
            return false;
        }
        for (int i = 0; i < size; ++i) {
            if (arr[i] != other.arr[i]) {
                return false;
            }
        }
        return true;
    }

    // Destructor
    ~IntArr() {
        delete[] arr;
    }
};
main(){
    int arr1[] = {1, 2, 3, 4, 5};
    IntArr arrObj1(arr1, 5); 
    arrObj1.display();

    IntArr arrObj2 = arrObj1; 
    cout << "Tim kiem 3 trong arrObj1: " << (arrObj1.search(3) ? "Tim thay" : "Khong tim thay") << endl;
    cout << "Tim kiem 6 trong arrObj1: " << (arrObj1.search(6) ? "Tim thay" : "Khong tim thay") << endl;
    cout << "Co phai arrObj1 va arrObj2 bang nhau hay khong ? " << (arrObj1.compare(arrObj2) ? "Co" : "Khong") << endl;
}