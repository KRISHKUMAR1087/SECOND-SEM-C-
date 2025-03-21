#include<iostream>
using namespace std;
int main()
{
    float m,n,a,c,d;
    int t;
    cout << "Enter Length Of Theater:- ";
    cin >> m;
    cout << "Enter Breath Of Theater:- ";
    cin >> n;
    cout << "Enter Length Of Square Graphite Flagstone:- ";
    cin >> a;
    
    c = (n + a - 1)/a;
    d = (m + a - 1)/a;
    t = c + d;
    cout << "The Required Flag stone is:- " << t;
        printf("\n\n KRISHKUMAR \n 24DCE027");
    }