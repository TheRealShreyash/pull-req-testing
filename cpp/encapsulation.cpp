#include <iostream>

using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance)
    {
        accountNumber = accNum;
        balance = initialBalance;
    }

    double getBalance() const
    {
        return balance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount" << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && balance >= amount)
        {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        }
        else
        {
            cout << "Invalid withdraw amount" << endl;
        }
    }
};

int
main()
{
    BankAccount myAccount("112233", 50000000);
    cout << "Balance before: " << myAccount.getBalance() << endl;
    myAccount.withdraw(500000);
    cout
        << "Balance after: " << myAccount.getBalance() << endl;
    return 0;
}