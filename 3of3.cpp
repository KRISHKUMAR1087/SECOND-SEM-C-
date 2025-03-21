#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class Account{
public:
    int *accountno;
    char **accountholder;
    float *accountbalance;
    int n;
    void createaccount()
    {
        cout<<"how many accounts you want to crate:- ";
        cin >> n;
        accountno = (int*) malloc(n*sizeof(int));
        accountholder = (char**) malloc(n*sizeof(char));
        accountbalance = (float*) malloc(n*sizeof(float));
    
        
        for (int i = 0; i < n; i++) {
        cout << "Enter Account NO:- ";
        cin >> accountno[i];
        cout << "Enter Account Holder's Name:- ";
        accountholder[i] = (char*) malloc(100 * sizeof(char));
        cin >> accountholder[i];
        cout << "Enter Current Account Balance:- ";
        cin >> accountbalance[i];
         }
    }

    void transfermoney(){
        int a,b;
        float c;
        cout << "Enter Parent Account No:- ";
        cin >> a;

        cout << "Enter Account No in which you want to transfer Money:- ";
        cin >> b;

        cout << "How Many Money You Tranfer To another Account";
        cin >> c;

        if(accountbalance[b-1] >= c)
        {accountbalance[a-1] += c;
        accountbalance[b-1] -= c;
        cout << "Money Transferring Completed Succefully"<< endl; }
        
        else{
        cout << "Insufficient Amount" << endl;}
    }

    void totalaccount(){
        
            cout << "Total Account is:- " << n << endl;
    }


};

int main(){
    Account obj;
    obj.createaccount();
    int choice;
    
 do{
    
    cout << "Enter 1 for Transfering money"<<endl;
    cout << "Enter 2 for calculate no.s of account created"<<endl;
    cout << "Enter 3 For Exit";
    cin >> choice;
        switch(choice)
        {
            case 1:
            obj.transfermoney();
            break;

            case 2:
            obj.totalaccount();
            break;

            case 3:
            cout << "Program Exited..";
            break;

            default:
            cout << "invalid Choice";
        }
    }
    while(choice != 3);



return 0;
}