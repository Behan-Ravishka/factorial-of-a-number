#include <iostream>

using namespace std;

int main()
{
    double number=0,fact=1;
    cout << "Enter a positive integer You want to find Factorial : ";
    cin >> number;
    for ( ; number>0 ; number-- )
    {
        fact=number*fact;
    }
        cout << "\n\tFactorial of you Entered Number is = " << fact << endl;

    return 0;
}
