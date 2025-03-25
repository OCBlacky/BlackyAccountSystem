#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 0.0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Amount must be positive!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else {
            cout << "Insufficient funds or invalid amount!" << endl;
        }
    }

    void checkBalance() {
        cout << "Your balance is: $" << balance << endl;
    }
};

int main() {
    BankAccount account;

    int choice;
    double amount;

    do {
        cout << "\nBank Account System\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.checkBalance();
                break;
            case 2:
                cout << "Enter deposit amount: $";
                cin >> amount;
                account.deposit(amount);
                break;
            case 3:
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using the system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
