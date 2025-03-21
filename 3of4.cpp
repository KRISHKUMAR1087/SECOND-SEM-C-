#include <iostream>
using namespace std;

class collection {
public:
    
    template <typename T>
    T findmax(T numbers[]) {
        T maxValue = numbers[0]; 

        for (int i = 1; i <5; i++) {  
            if (numbers[i] > maxValue) {  
                maxValue = numbers[i]; 
            }
        }
        cout << "The Maximum Value is: " << maxValue << endl;
    }

    
    template <typename T>
    void displayArray(T numbers[]) {
        cout << "Array: ";
        for (int i = 0; i < 5; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }

    template<typename T>
    void reverseArray(T numbers[]){
        T temp;
        int first = 0;
        int end = 4;
        for(int i = 0 ; i < 5 ; i++)
        {   while(first<end){
            temp = numbers[first];
            numbers[first] = numbers[end];
            numbers[end] = temp;
            first ++;
            end --;}

        }
        cout << "The Reversed Array is:- ";
        for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";}
    }
};

int main() {
    collection obj;
    int choice; 
   
   do
   {        
    cout << "\nEnter 1 for int Data\n" ;
    cout << "Enter 2 for float Data\n" ;
    cout << "Enter 3 for double Data\n" ;
    cout << "Enter 4 for Exit\n" ;
    cout << "Enter Type Of Your Data:- " ;
    
    cin >> choice;

    switch(choice)
       {
            case 1:
            int num[5];
            cout << "Enter int no.:- ";
            for (int i = 0; i < 5; i++) {
            cin >> num[i]; }
            obj.displayArray(num);
            obj.findmax(num);
            obj.reverseArray(num);
            break;

            case 2:
            float num1[5];
            cout << "Enter float no.:- ";
            for (int i = 0; i < 5; i++) {
            cin >> num1[i];}
                
            obj.displayArray(num1);
            obj.findmax(num1);
            obj.reverseArray(num1);
            break;

            case 3:
            double num2[5];
            cout << "Enter double no.:- ";
            for (int i = 0; i < 5; i++) {
            cin >> num2[i];}
            obj.displayArray(num2);
            obj.findmax(num2);
            obj.reverseArray(num2);
            break;

            case 4:                
            cout << "Program Exited";
            break;
        
    
         
        }
    }  while(choice!=4);
   

    return 0;
}