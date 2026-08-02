#include <iostream>
#include <cmath>
using namespace std;

class Account
{
public:
    string accountNumber;
    int balance;
    string accountHolderName;

    Account(string id, string name, double initial_balance)
    {
        accountNumber = id;
        accountHolderName = name;
        balance = static_cast<int>(round(initial_balance * 100.0));
    }

    bool deposit(double amount)
    {
        if (amount > 0.0)
        {
            balance += static_cast<int>(round(amount * 100.0));
        }
    }

    bool withdraw(double amount)
    {
        if (amount > 0.0)
        {
            int amount_in_cent = static_cast<int>(round(amount * 100.0));
            if (balance >= amount_in_cent)
            {
                balance -= amount_in_cent;
            }
        }
    }

    double getBalance() const
    {
        return balance / 100.0;
    }
};

int main()
{
    Account account1("0005", "Peter", 100.0);
    cout << "Initial Balance: " << account1.getBalance() << endl;
    if (account1.deposit(50.45))
    {
        cout << "New Balance after deposit: " << account1.getBalance() << endl;
    }
    if (account1.withdraw(150.45))
    {
        cout << "New Balance after withdraw: " << account1.getBalance() << endl;
    }

    return 0;
}
