#include <iostream>
#include <string> 

using namespace std;

class student {
public:
    int rollNumber;
    string Name;  
    float marks[3];

    // Default Constructor
    student() {
        rollNumber = 0;
        Name = "N/A";
        marks[0] = marks[1] = marks[2] = 0.0;
    }

    // Parameterized Constructor
    student(int r, string n, float m[]) {
        rollNumber = r;
        Name = n;
        for (int i = 0; i < 3; i++) {
            marks[i] = m[i];
        }
    }

    // Function to display student details
    void displayDetails() {
        cout << "\nStudent Details:\n";
        cout << "----------------------" << endl;
        cout << "Name: " << Name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Marks of Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }

    // Function to calculate and display the average marks
    void calculateAverage() {
        float total = 0;
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }
        cout << "Average Marks: " << total / 3 << endl;
    }
};

int main() {
    int rollNumber;
    string Name;
    float marks[3];

    // Taking input
    cout << "Enter Name: ";
    cin >> Name;

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter Marks for 3 Subjects: " << endl;
    for (int i = 0; i < 3; i++) {
        cin >> marks[i];
    }

    // Creating an object using the parameterized constructor
    student obj(rollNumber, Name, marks);

    // Displaying details
    obj.displayDetails();

    // Calculating and displaying average marks
    obj.calculateAverage();
    printf("\n\n KRISHKUMAR \n 24DCE027");
    return 0;
}
