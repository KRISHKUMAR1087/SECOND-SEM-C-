#include <iostream>
#include <cmath>
using namespace std;

class Loan {
public:
    int loanID;
    string applicantName;
    double loanAmount;
    double interestRate;
    int loanTerm;

    // Default Constructor
    Loan() {
        loanID = 0;
        applicantName = "N/A";
        loanAmount = 0.0;
        interestRate = 0.0;
        loanTerm = 0;
    }

    // Parameterized Constructor
    Loan(int a, string b, double c, double d, int e) {
        this->loanID = a;
        this->applicantName = b;
        this->loanAmount = c;
        this->interestRate = d;
        this->loanTerm = e;
    }

    // Display Loan Details
    void loanDetails() {
        int ID;
        cout << "Enter Your Loan ID: ";
        cin >> ID;
        
        if (ID == loanID) {
            cout << "\n=== Loan Details ===\n";
            cout << "Applicant Name: " << applicantName << endl;
            cout << "Loan Amount: " << loanAmount << endl;
            cout << "Interest Rate: " << interestRate << "%" << endl;
            cout << "Loan Term: " << loanTerm << " months\n";
        } else {
            cout << "Invalid Loan ID!\n";
        }
    }

    // Calculate EMI
    double calculateEMI() {
        double monthlyRate = (interestRate / 12) / 100; // Convert annual rate to monthly rate
        double EMI;

        if (monthlyRate == 0) {
            EMI = loanAmount / loanTerm;
        } else {
            EMI = (loanAmount * monthlyRate * pow(1 + monthlyRate, loanTerm)) / (pow(1 + monthlyRate, loanTerm) - 1);
        }

        cout << "\n=== EMI Calculation ===\n";
        cout << "Per Month EMI: " << EMI << endl;

        return EMI;
    }

    // Display Relevant Loan Info
    void relevantInfo() {
        double EMI = calculateEMI(); // Compute EMI

        cout << "\n=== Loan Summary ===\n";
        cout << "Loan Amount: " << loanAmount << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "Loan Term: " << loanTerm << " months\n";
        cout << "Per Month EMI: " << EMI << endl;
    }
};

int main() {
    int choice;
    int loanID;
    string applicantName;
    double loanAmount;
    double interestRate;
    int loanTerm;

    // Get Loan Details from User
    cout << "Enter Your Loan ID: ";
    cin >> loanID;
    cout << "Enter Applicant Name: ";
    cin.ignore();
    getline(cin, applicantName);
    cout << "Enter Loan Amount: ";
    cin >> loanAmount;
    cout << "Enter Interest Rate (in %): ";
    cin >> interestRate;
    cout << "Enter Loan Term (in months): ";
    cin >> loanTerm;

    Loan obj(loanID, applicantName, loanAmount, interestRate, loanTerm);

    do {
        cout << "\n=== Loan Menu ===\n";
        cout << "1. View Loan Details\n";
        cout << "2. Calculate EMI\n";
        cout << "3. View Loan Summary\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                obj.loanDetails();
                break;
            case 2:
                obj.calculateEMI();
                break;
            case 3:
                obj.relevantInfo();
                break;
            case 4:
                cout << "Exiting Program...\n";
                break;
            default:
                cout << "Invalid input! Please enter a valid option.\n";
        }
    } while (choice != 4);
    printf("\n\n KRISHKUMAR \n 24DCE027");
    return 0;
}
