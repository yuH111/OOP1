class BankAccount {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;
    static double interestRate;

public:
    
    BankAccount() : balance(0) {}

    
    BankAccount(const string& name, const string& accNum, const string& type, double bal)
        : depositorName(name), accountNumber(accNum), accountType(type), balance(bal) {}

    
    BankAccount(const BankAccount& other)
        : depositorName(other.depositorName), accountNumber(other.accountNumber),
          accountType(other.accountType), balance(other.balance) {}

    
    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        const double minBalance = 100.0; 
        if (balance - amount >= minBalance) {
            balance -= amount;
        } else {
            cout << "S? du kh�ng d?!" << std::endl;
        }
    }
    void ouputDetails() {
        cout << "Ten nguoi gui: " << depositorName << std::endl;
        cout << "So tai khoan: " << accountNumber << std::endl;
        cout << "Loai tai khoan " << accountType << std::endl;
        cout << "S? du: " << balance << std::endl;
    }

    static void ouputInterestRate() {
        cout << "L�i su?t: " << interestRate << "%" << std::endl;
    }
};

double BankAccount::interestRate = 5.0;

class IntArr {
private:
    int* arr;
    int size;

public:
    IntArr() : arr(nullptr), size(0) {}

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

    void ouput() {
        cout << "N?i dung m?ng: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << std::endl;
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

   
    ~IntArr() {
        delete[] arr;
    }
};