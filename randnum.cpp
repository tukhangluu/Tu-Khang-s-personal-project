#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int choose, rando, guess;
    while (true)
    {
        cout << "choose 1 to continue, choose 2 to exit: ";
        cin >> choose;
        if (choose == 2)
        {
            cout << " exiting program....";
            break;
        }

        else if (choose == 1)
        {
            rando = (rand() % 100) + 1;
            guess = 0;
            while (guess != rando)
            {
                cout << "enter your guess: ";
                cin >> guess;
                if (guess < rando)
                {
                    cout << "larger!";
                }
                else if (guess > rando)
                {
                    cout << "smaller!";
                }
                else
                {
                    cout << "BINGOS \n";
                }
            }
        }
    }

    return 0;
}