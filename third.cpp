#include<iostream>
using namespace std;

int main() {
    int digit, number, j, sum = 0;
    cout << "Enter the number: ";
    cin >> number;
    
    digit = number;  // Store the original number to compare later

    while (number > 0) {
        j = number % 10;  // Get the last digit of the number
        sum += (j * j * j);  // Add the cube of the digit to the sum
        number = number / 10;  // Remove the last digit
    }

    if (sum == digit) {
        cout << "The number is an Armstrong number." << endl;
    } else {
        cout << "The number is not an Armstrong number." << endl;
    }
    printf("\n\n KRISHKUMAR \n 24DCE027");
    return 0;
}
