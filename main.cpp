#include <iostream>

using namespace std;

int main()
{
    //make variables and get input from user
    double number=0,fact=1;
    cout << "Enter a positive integer You want to find Factorial : ";
    cin >> number;
    //add a condition to check input is postive or negative
    if (number>=0)
    {
        //if input is positive
        for ( ; number>0 ; number-- )
        {
            fact=number*fact;
        }
            cout << "\n\tFactorial of you Entered Number is = " << fact << endl;
    }
    else
    {
        //if input is a negative
        cout << "\n\tInvalid Input! Please enter a Positive Number!" << endl;
    }

    return 0;
}
