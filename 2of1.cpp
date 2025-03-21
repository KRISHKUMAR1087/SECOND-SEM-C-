#include<iostream>
#include<math.h>
using namespace std;

class Rectangle
{
    private:
    int length,breath;

    public:   
     int area()
     {  
        int c;
        c = length*breath;
        return c;
      }

     int perimeter()
     {
        int d;
        d = 2*(length+breath);
        return d;
     }

        Rectangle(int l, int w)
    {
        length = l;
        breath = w;
    } 

};

int main()
{
    int l,w;
    cout << "Enter length and breath :- " << endl;
    cout << "Length = ";
    cin >> l;
    cout << "Breath = ";
    cin >> w;
    Rectangle obj(l,w);
    cout << "The Area Of Rectangle is = " << obj.area() << endl;
    cout << "The Perimeter Of Rectangle is = " << obj.perimeter();
    printf("\n\n KRISHKUMAR \n 24DCE027");
    return 0;
}