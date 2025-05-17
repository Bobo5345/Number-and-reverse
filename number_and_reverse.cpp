#include <iostream>
using namespace std;
int main()
{
    // Declaring a variable for no:of digits
    int count;

    // Asking user to input a number, and collecting it using for loop.
    cout << "This program helps to find reverse of a number" << endl;
    cout << "Enter how much digit does the number have: ";
    cin >> count;

    // Making an array to collect the number
    int num[count];

    // Using for loop to collect the digits
    for (int i = 0; i < count; i++ ) 
    {
        cout << "\nEnter digit " << i+1 << ":\t";
        cin >> num[i];
    }

    // Printing it in reverse order using for loop
    cout << "\nThe reversed number is: ";
    for (int j = (count-1); j >= 0; j--) 
    {
        cout << num[j];
    }
    
    return 0;
}