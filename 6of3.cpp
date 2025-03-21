#include<iostream>
#include<algorithm>
using namespace std;
int a,b;
int j;
int main()
{   
  
    cout << "'Enter The Size of Array 1:- ";
    cin >> a;
    int *arr1 = new int[a];

    cout << "'Enter The Size of Array 2:- ";
    cin >> b;
    int *arr2 = new int[b];

    cout << "\nEnter The Elements Of Array1:- ";
    for(int i=0 ; i<a ; i++)
    {
        cin >> arr1[i];
    }

    cout << "\nEnter The Elements Of Array2:- ";
    for(int i=0 ; i<b ; i++)
    {
        cin >> arr2[i];
    }

//Merge the Array
    j=0;
    int *arr3 = new int[a+b];
    for (int i=0 ; i < a+b ; i++)
    {
        if(i<a)
        {
            arr3[j++] = arr1[i];
        }
    }
    for (int i=0 ; i < b ; i++)
    {
        arr3[j++] = arr2[i];
    }

    cout << "\nThe Merged array is:- ";
    for(int i=0 ; i < a+b ; i++)
    {
        cout << arr3[i] << " ";  
    }

    for (int i = 0; i < a+b; i++) {
        for (j = 0; j < a+b-1; j++) {
            if (arr3[j] > arr3[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp;
                temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
                
            }
        }
    }
    
   

    cout << "\nThe sorted array is:- ";
    for(int i=0 ; i < a+b ; i++)
    {
        cout << arr3[i] << " ";  
    }

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    cout << "\n Memory Deleted";
}