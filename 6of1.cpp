#include <iostream>
using namespace std;

int main()
{
    int *darr = new int[5];  // Allocate dynamic array
    int a;

    cout << "\n\n// INSERT ARRAY //\n";
    cout << "Enter the elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> darr[i];
    }

    cout << "\n\n//PRINT ARRAY //\n";
    cout << "The Elements are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << darr[i] << " ";
    }
    cout << endl;

    cout << "\n\n// DELETE AN ARRAY ELEMENT //\n";
    cout << "Enter the position (1-5) of the element you want to delete: ";
    cin >> a;

        int *newArr = new int[4];  // Create a new array with size 4
        for (int i = 0, j = 0; i < 5; i++)
        {
            if (i != a - 1)  // Skip the element to be deleted
            {
                newArr[j++] = darr[i];
            }
        }

        delete[] darr;  // Free old array memory
        darr = newArr;  // Point to new array

        cout << "\n\n // PRINT UPDATED ARRAY //\n";
        cout << "The Updated Elements are: ";
        for (int i = 0; i < 4; i++)
        {
            cout << darr[i] << " ";
        }
        cout << endl;

    delete[] darr; // Free final allocated memory
    delete[] newArr;
    return 0;
}
