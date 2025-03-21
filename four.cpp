#include <iostream>
#include <math.h>
using namespace std;


int gcd(int a, int b) {
   int temp;
   temp = abs(a-b);
    return temp;
}


int lcm(int a, int b) {
    return ((a*b)/gcd(a,b));
}

int main() {
    int num1, num2;
    
   
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
 
    int result = lcm(num1, num2);

    cout << "LCM of " << num1 << " and " << num2 << " is: " << result << endl;
    printf("\n\n KRISHKUMAR \n 24DCE027");
    return 0;
}
