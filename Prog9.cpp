#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
    string depositorName;
    int accountNumber;
    string accountType;
    float balance;

    void assignInitialValues(string name, int accNumber, string accType, float initialBalance)
    {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(float amount)
    {
        balance += amount;
        cout << "Amount deposited successfully. New balance: " << balance << endl;
    }

    void withdraw(float amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance: " << balance << endl;
        }
    }

    void display()
    {
        cout << "Depositor Name: " << depositorName << ", Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount customers[10];
    int numCustomers;

    cout << "Enter the number of customers (maximum 10): ";
    cin >> numCustomers;

    if (numCustomers > 10)
    {
        cout << "You can only enter up to 10 customers." << endl;
        return 1;
    }

    for (int i = 0; i < numCustomers; i++)
    {
        string name, accType;
        int accNumber;
        float initialBalance;

        cout << "Enter details for customer " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin, name);
        cout << "Account Number: ";
        cin >> accNumber;
        cout << "Account Type: ";
        getline(cin, accType);
        cout << "Initial Balance: ";
        cin >> initialBalance;

        customers[i].assignInitialValues(name, accNumber, accType, initialBalance);
    }

    cout << "\nCustomer details:" << endl;
    for (int i = 0; i < numCustomers; i++)
    {
        customers[i].display();
    }

    int customerIndex;
    float amount;

    cout << "\nEnter the customer index (1 to " << numCustomers << ") to deposit amount: ";
    cin >> customerIndex;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    customers[customerIndex - 1].deposit(amount);

    cout << "\nEnter the customer index (1 to " << numCustomers << ") to withdraw amount: ";
    cin >> customerIndex;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    customers[customerIndex - 1].withdraw(amount);

    cout << "\nCustomer details after transactions:" << endl;
    for (int i = 0; i < numCustomers; i++)
    {
        customers[i].display();
    }

    return 0;
}