#include <iostream>
#include <string>
using namespace std;

struct details {
    int Product_ID;
    string Product_Name;
    int Product_Price;
    int Product_Stock;
} D[100];

int n = 0;

void addProduct() {
    cout << "Enter the Product Id: ";
    cin >> D[n].Product_ID;
    
    cout << "Enter the Name Of Product: ";
    cin.ignore(); // Ignore newline from previous input
    getline(cin, D[n].Product_Name);

    cout << "Enter the Price Of Product: ";
    cin >> D[n].Product_Price;

    cout << "Enter the Remaining Stock Of Product: ";
    cin >> D[n].Product_Stock;

    n++; // Increase the total number of products
}

void updateQuantity() {
    int id, newStock;
    cout << "Enter Id Of Product For Editing Quantity: ";
    cin >> id;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (D[i].Product_ID == id) {
            cout << "Enter New Quantity: ";
            cin >> newStock;
            D[i].Product_Stock = newStock;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Product ID not found!" << endl;
    }
}

void calculateTotalValue() {
    int totalValue = 0;
    for (int i = 0; i < n; i++) {
        totalValue += (D[i].Product_Price * D[i].Product_Stock);
    }
    cout << "Total Value of All Products: " << totalValue << endl;
}

int main() {
    int choice;
    cout << "Enter The Total No. Of Products: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter the Product Id Of Product " << (i + 1) << ": ";
        cin >> D[i].Product_ID;

        cout << "Enter the Name Of Product " << (i + 1) << ": ";
        cin.ignore(); // Ignore leftover newline from previous input
        getline(cin, D[i].Product_Name);

        cout << "Enter the Price Of Product " << (i + 1) << ": ";
        cin >> D[i].Product_Price;

        cout << "Enter the Remaining Stock Of Product " << (i + 1) << ": ";
        cin >> D[i].Product_Stock;
    }

    do {
        cout << "\n1. Add New Product\n";
        cout << "2. Update the Quantity of an Existing Product\n";
        cout << "3. Calculate the Total Value of All Products\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addProduct();
                break;
            case 2:
                updateQuantity();
                break;
            case 3:
                calculateTotalValue();
                break;
            case 4:
                cout << "Exiting Program.\n";
                break;
            default:
                cout << "Invalid Choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
