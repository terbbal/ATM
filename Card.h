#include <iostream>
using namespace std;

class Card{
private:
string cardNumber;
int cardPW;
Account* linkedAccount;

public:
Card(string CardNumber, int CardPW, Account* linkedAcccount)

string getcardNumber() const;

bool verifyPW(password);
Account* getlinkedAccount();
};



