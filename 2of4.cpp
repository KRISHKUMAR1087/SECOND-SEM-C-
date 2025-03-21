#include <iostream>
#include <string>

using namespace std;

class InventoryItem {
public:
    int itemID;
    string itemName;
    float price;
    int quantity;

    InventoryItem() {
        itemID = 0;
        price = 0.0;
        quantity = 0;
    }

    InventoryItem(int id, string name, float p, int q) {
        itemID = id;
        itemName = name;
        price = p;
        quantity = q;
    }

    void addStock() {
        int stock;
        cout << "Enter new quantity to add: ";
        cin >> stock;
        quantity += stock;
        cout << "Updated quantity: " << quantity << endl;
    }

    void sellItem() {
        int sell;
        cout << "Enter quantity to sell: ";
        cin >> sell;

        if (sell > quantity) {
            cout << "Insufficient stock. Available quantity: " << quantity << endl;
        } else {
            quantity -= sell;
            cout << "Updated quantity: " << quantity << endl;
        }
    }

    void displayItem() {
        cout << "Item ID: " << itemID << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Price: $" << price << endl;
        cout << "Remaining Quantity: " << quantity << endl;
    }
};

int main() {
    int C;
    int itemID;
    string itemName;
    float price;
    int quantity;

    cout << "Enter item ID: ";
    cin >> itemID;
    cin.ignore(); // Ignore newline left in the buffer
    cout << "Enter item name: ";
    getline(cin, itemName); // Allows multi-word input
    cout << "Enter item price: ";
    cin >> price;
    cout << "Enter initial quantity: ";
    cin >> quantity;

    InventoryItem obj(itemID, itemName, price, quantity);

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Stock\n";
        cout << "2. Sell Item\n";
        cout << "3. Display Item Details\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> C;

        switch (C) {
            case 1:
                obj.addStock();
                break;
            case 2:
                obj.sellItem();
                break;
            case 3:
                obj.displayItem();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }
    } while (C != 4);
    printf("\n\n KRISHKUMAR \n 24DCE027");
    return 0;
}
