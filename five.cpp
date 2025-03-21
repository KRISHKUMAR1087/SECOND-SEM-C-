#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A, B, C;
    float D, Root1, Root2;

    cout << "Quadratic Equation: ax^2 + bx + c\n";

    cout << "Enter A: ";
    cin >> A;
    cout << "Enter B: ";
    cin >> B;
    cout << "Enter C: ";
    cin >> C;

    if (A == 0) {
        cout << "This is not a quadratic equation (A cannot be 0).\n";
        return 0;
    }

    D = (B * B) - (4 * A * C);

    if (D > 0) {
        Root1 = (-B + sqrt(D)) / (2 * A);
        Root2 = (-B - sqrt(D)) / (2 * A);
        cout << "The roots of the equation are real and distinct:\n";
        cout << "Root1 = " << Root1 << "\nRoot2 = " << Root2 << endl;
    }
    else if (D == 0) {
        Root1 = Root2 = -B / (2.0 * A);
        cout << "The roots of the equation are real and equal:\n";
        cout << "Root1 = Root2 = " << Root1 << endl;
    }
    else {
        float realPart = -B / (2.0 * A);
        float imaginaryPart = sqrt(-D) / (2.0 * A);
        cout << "The roots of the equation are complex and imaginary:\n";
        cout << "Root1 = " << realPart << " + " << imaginaryPart << "i\n";
        cout << "Root2 = " << realPart << " - " << imaginaryPart << "i\n";
    }
    printf("\n\n KRISHKUMAR \n 24DCE027");
    return 0;
}
