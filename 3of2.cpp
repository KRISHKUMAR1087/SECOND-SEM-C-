#include <iostream>
using namespace std;

class CalculateSum {
private:
    int* arr;  // Pointer to store array
    int size;  // Size of the array

public:
    CalculateSum() : arr(nullptr), size(0) {}

    void sum(int* inputArr, int n) {
        size = n;
        arr = new int[size];  // Allocate dynamic memory
        for (int i = 0; i < size; i++) {
            arr[i] = inputArr[i];  // Copy elements
        }

        int h;
        cout << "Enter an index to sum with the previous element: ";
        cin >> h;

        // Ensure the index is valid
        if (h <= 0 || h >= size) {
            cout << "Invalid index! Please enter a valid index within range (1 to " << size - 1 << ")." << endl;
            return;
        }

        int result = calculateResult(h);
        cout << "Sum of elements at index " << h << " and " << h - 1 << " = " << result << endl;
    }

    int calculateResult(int h) {
        if (h == 1) {
            return arr[1] + arr[0];
        }
        return arr[h] + arr[h - 1];
    }

    ~CalculateSum() {
        delete[] arr;  // Free allocated memory
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];  // Dynamically allocated array

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    CalculateSum obj;
    obj.sum(arr, n);

    delete[] arr;  // Free allocated memory

    return 0;
}
