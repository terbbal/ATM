#include <iosteam>
#include <string>

class Account{
private:
string bankName;
string userName;
string accountNumber;
double balance;

public:
Account(string BankName, string UserName, string AccountNumber, double Balance);

string getbankName() const;
string getuserName() const;
string getaccountNumber() const;
double getbalance() const;

void deposit(double amount);
void withdraw(double amount);

void display() const;
};



