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

void deposit(double amount); //REQ 4.3 Once Cash or checks are accepted by ATM, the transaction must be reflected to the bank account as well
void withdraw(double amount); //REQ 5.3 출금이 성공하면 계좌에도 출금이 반영되어야 함.
// 추가적으로 6.7 만족

void display() const;
};



