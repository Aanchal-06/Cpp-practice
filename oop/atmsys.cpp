#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        if(initialBalance > 0) balance = initialBalance;
        else balance = 0;
    }

    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
    }

    void withdraw(double amount) {
        if(amount > balance) {
            cout << "Error: Insufficient Funds!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        }
    }

    void checkBalance() {
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount(500);

    myAccount.deposit(200);
    myAccount.withdraw(100);
    myAccount.withdraw(1000);
    myAccount.checkBalance();

    return 0;
}