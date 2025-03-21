#include <iostream>
using namespace std;

// Function to check if a number is perfect
bool isPerfectNumber(int num) {
    if (num <= 1) return false;  // Perfect numbers are greater than 1
    
    int sum = 0;
    
    // Find divisors and sum them
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    // Check if sum of divisors equals the number
    return sum == num;
}

int main() {
    int num;
    
    // User input
    cout << "Enter a number: ";
    cin >> num;
    
    // Check and display result
    if (isPerfectNumber(num)) {
        cout << num << " is a Perfect Number." << endl;
    } else {
        cout << num << " is NOT a Perfect Number." << endl;
    }
    printf("\n\n KRISHKUMAR \n 24DCE027");
    return 0;
}
