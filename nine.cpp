#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double H, L;
     cout << "Enter Height and Length :- ";
    cin >> H >> L;
    
    // Calculate depth using the formula
    double D = ((H * H) + (L * L)) / (2.0 * H);
    
    // Print the result with high precision
    cout << fixed << setprecision(10) << D << endl;
    printf("\n\n KRISHKUMAR \n 24DCE027");
    return 0;
}
