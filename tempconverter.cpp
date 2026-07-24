#include <iostream>
using namespace std;

int CtoF(int C)
{
    return C * 1.8 + 32;
}

int main()
{
    int input;
    cout << "enter your temperature in Celsius: ";
    cin >> input;
    int F = CtoF(input);
    cout << "your temerature in Fahrenheit is: " << F << endl;

    return 0;
}
