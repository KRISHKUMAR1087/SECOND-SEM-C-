#include <iostream>
#include <string>
using namespace std;

class details
{
public:
    string name;
    int basicSalary;
    int bonus;
    int custBonus;

    details()
    {
        bonus = 500;
    }

    void Name()
    {
        cout << "Enter name: ";
        cin >> name;
        fflush(stdin);
    }

    inline void total_salary(void)
    {
        int tsalary = basicSalary + bonus;
        cout << "Total salary = " << tsalary << endl;
        fflush(stdin);
    }

    void salary()
    {
        int a;
        cout << "Enter basic salary of employee: ";
        cin >> a;
        basicSalary = a;
        fflush(stdin);
    }

    void Bonus()
    {
        cout << "Enter the choice for bonus:" << endl;
        cout << "1. Default bonus" << endl;
        cout << "2. Custom bonus" << endl;

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:

            break;
        case 2:
            cout << "Give custom bonus: ";
            cin >> custBonus;
            bonus = custBonus;
            break;
        default:
            cout << "Invalid choice, using default bonus." << endl;

            break;
        }
        fflush(stdin);
    }

    void Display()
    {
        cout << "Name: " << name << endl;
        cout << "Basic salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total salary: ";
        total_salary();
        cout << "_" << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of employees:" << endl;
    cin >> n;

    details obj[n];
    for (int i = 0; i < n; i++)
    {
        obj[i].Name();
        obj[i].Bonus();
        obj[i].salary();
        cout << "_" << endl;
        obj[i].Display();
    }
    printf("\n\n KRISHKUMAR \n 24DCE027");
   return 0;
}