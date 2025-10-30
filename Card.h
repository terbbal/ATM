#include <iostream>
using namespace std;

class Account;

class Card{
private:
string cardNumber;
string cardPW;
Account* linkedAccount;

public:
Card(string CardNumber, string CardPW, Account* linkedAccount);

string getCardNumber() const;

bool verifyPW(const string password) const; //Exception Handling
Account* getLinkedAccount();
};



