#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 3;

    cout << "Before swapping a = " << a << " , b = " << b
         << endl;

    int temp;

    temp = a;
    a = b;
    b = temp;
    cout << "After swapping a = " << a << " , b = " << b
         << endl;

       
    cout << "\n or without temp\n Before swapping a = " << a << " , b = " << b
         << endl;

    b = a + b;
    a = b - a;
    b = b - a;

    cout << "After swapping a = " << a << " , b = " << b
         << endl;

         cout << "\n or using inbuild function\nBefore swapping a = " << a << " , b = " << b
         << endl;

    swap(a, b);

    cout << "After swapping a = " << a << " , b = " << b
         << endl;

    return 0;
}