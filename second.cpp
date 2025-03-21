#include<iostream>
#include<string>
using namespace std;
int main()
{
    char string[100];
    cout << "Enter the string :- ";
    cin >> string;
       for(int i=0 ; string[i] != '\0' ; i++)
    {
        char c = string[i];
        {
            if(c>='A' && c<='Z')
            {
                c = c + 32;
                string[i] = c;
            }

            else if(c>='a' && c<='z')
            {
                c = c - 32;
                string[i] = c;
            }
        }
    }
    cout << "Your Updated String Is:- " << string;
    printf("\n\n KRISHKUMAR \n 24DCE027");

}