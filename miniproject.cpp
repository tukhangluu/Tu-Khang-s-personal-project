#include <iostream>
using namespace std;

int main()
{

    int add, sub, mult, div;

    while (true)
    {
        int process;
        cout << " choose your operation you want to perform: \n 1. addition \n 2. subtraction \n 3. multiplication \n 4. division \n 5. EXIT \n";
        cin >> process;

        if (process == 5)
        {
            cout << "exit program..." << endl;
            break;
        }

        int first, second;
        cout << "enter two numbers: ";
        cin >> first >> second;

        int add, sub, mult, div;
        if (process == 1)
        {

            add = first + second;
            cout << "your answer for addition is: " << add << endl;
        }

        else if (process == 2)
        {
            sub = first - second;
            cout << "your answer for subtraction is: " << sub << endl;
        }
        else if (process == 3)
        {
            mult = first * second;
            cout << "your answer for multipilication is: " << mult << endl;
        }
        else if (process == 4)
        {
            if (second == 0)
            {
                cout << "error" << endl;
            }
            else
            {

                div = first / second;
                cout << "your answer for division is: " << div << endl;
            }
        }
    }
    return 0;
}
