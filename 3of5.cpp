#include <iostream>
using namespace std;

class SuperDigit 
{
public:
int sum = 0;
    int findSuperDigit(int number) {
        if (number < 10) {
            cout<<number;
            return number; 
            
        }

        while (number > 0) {
            sum += number % 10; 
            number /= 10;        
        }

        return findSuperDigit(sum); 
    }
};

int main() {
    int num;
    cout << "Enter a number to find its Super Digit: ";
    cin >> num;

    SuperDigit obj;
    int result = obj.findSuperDigit(num);

    cout << "Super Digit is: " << result << endl;

    return 0;
}
