#include <iostream>
using namespace std;
class Atm
{
private:
    int balance;

public:
    void setBalance(int b)
    {
        this->balance = b;
    }

    void withdraw(int amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Successfully withdrawn " << amount << endl;
        }
    }

    int getBalance()
    {
        return balance;
    }
};

int main()
{
    Atm a;
    a.setBalance(10000);
    a.withdraw(2000);

    cout << "Balance is :" << a.getBalance() << endl;

    return 0;
}