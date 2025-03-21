#include <iostream>
#include <string>
using namespace std;

struct Account {
    string Name;
    int Account_Number;
    int Balance;
} A[100];

int main() {
    int choice, i, n, d;

    cout << "Enter Total No. of Accounts: ";
    cin >> n;

    // Creating accounts
    for (i = 0; i < n; i++) {
        cout << "\nMake Account of " << i + 1 << endl;

        cout << "Enter User's Name: ";
        cin.ignore(); // Clears input buffer
        getline(cin, A[i].Name);

        cout << "Enter Account Number: ";
        cin >> A[i].Account_Number;

        cout << "Enter Account Balance: ";
        cin >> A[i].Balance;
    }

    // Menu-driven approach
    do {
        cout << "\nEnter Account No. to See Details: ";
        cin >> d;

        // Validating account number
        int index = -1;
        for (i = 0; i < n; i++) {
            if (A[i].Account_Number == d) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            cout << "Error: Account Not Found!" << endl;
            continue;
        }

        cout << "\nEnter 1 For Deposit Money" << endl;
        cout << "Enter 2 For Withdraw Money" << endl;
        cout << "Enter 3 For Checking Account Balance" << endl;
        cout << "Enter 4 For Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                int Deposit;
                cout << "Enter Amount for Deposit: ";
                cin >> Deposit;
                if (Deposit > 0) {
                    A[index].Balance += Deposit;
                    cout << "Money Deposited Successfully!" << endl;
                    cout << "Final Balance: " << A[index].Balance << endl;
                } else {
                    cout << "Invalid Deposit Amount!" << endl;
                }
                break;
            }

            case 2: {
                int Withdraw;
                cout << "Enter Amount for Withdrawal: ";
                cin >> Withdraw;
                if (Withdraw > 0 && Withdraw <= A[index].Balance) {
                    A[index].Balance -= Withdraw;
                    cout << "Money Withdrawn Successfully!" << endl;
                    cout << "Remaining Balance: " << A[index].Balance << endl;
                } else if (Withdraw > A[index].Balance) {
                    cout << "Error: Insufficient Balance!" << endl;
                } else {
                    cout << "Invalid Withdrawal Amount!" << endl;
                }
                break;
            }

            case 3:
                cout << "The Balance of Account is: " << A[index].Balance << endl;
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice! Try Again." << endl;
        }
    } while (choice != 4);

    cout << "\n\nKRISHKUMAR\n24DCE027" << endl;
    return 0;
}
