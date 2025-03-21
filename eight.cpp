#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Matrix size: ";
    cin >> n;

    int matrix[n][n];
    int sum[n] = {0}; 
    int a[n] = {0};   

    cout << "Enter Matrix Row Wise:" << endl;

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

  
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            sum[j] += matrix[i][j];
        }
        
        if (sum[j] == 0) {
            a[j] = 1; 
        }
    }

   
    int final = 0;
    for (int i = 0; i < n; i++) {
        final += a[i];
    }

    if (final == n) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    printf("\n\n KRISHKUMAR \n 24DCE027");
    return 0;
}
