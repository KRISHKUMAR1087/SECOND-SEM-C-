#include <iostream>
#include <string>

using namespace std;

class BankAccount {
public:
    string account_holder;
    int account_number;
    int balance;

    BankAccount() {
        balance = 0;
    }

    BankAccount(string n, int m, float b) {
        account_holder = n;
        account_number = m;
        balance = b;
    }

    void depositAmount() {
        float deposit;
        cout << "Enter Deposit Amount: ";
        cin >> deposit;
        balance += deposit;
        cout << "Deposit Successful! Your new account balance is: " << balance << endl;
    }

    void withdrawMoney() {
        float withdraw;
        cout << "Enter Withdrawal Amount: ";
        cin >> withdraw;
        if (withdraw > balance) {
            cout << "Insufficient Balance!" << endl;
            cout << "Your current account balance is: " << balance << endl;
        } else {
            balance -= withdraw;
            cout << "Withdrawal Successful! Your new account balance is: " << balance << endl;
        }
    }

    void displayAccountDetails() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << account_holder << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    int choice = 0;
    string account_holder;
    int account_number;
    float balance;

    cout << "Enter Account Holder's Name: ";
    cin.ignore();  // Clear buffer for getline
    getline(cin, account_holder);  // Allows full name input

    cout << "Enter Account Number: ";
    cin >> account_number;

    cout << "Enter Initial Account Balance: ";
    cin >> balance;

    BankAccount obj(account_holder, account_number, balance);

    do {
        cout << "\n--- Bank Menu ---" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                obj.depositAmount();
                break;
            case 2:
                obj.withdrawMoney();
                break;
            case 3:
                obj.displayAccountDetails();
                break;
            case 4:
                cout << "Exiting program. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        }
    } while (choice != 4);

    cout << "\n\nKRISHKUMAR\n24DCE027" << endl;
    return 0;
}
