#include <iostream>
using namespace std;

//REQ1.8 Each ATM have several types of transcation fees.

class Feetable{
static bouble getDepositFee(bool isprimary); //true이면 0원, false이면 1000원
static bouble getWithdrawalFee(bool isprimary); //true이면 1000원. false이면 2000원
static bouble getTransferFee(bool fromprimary, bool toprimary); // true-true 1000원, true-false or false-true 2000원, flase-false 4000원
static bouble getCasgTreansferFee(); // 무조건 2000원
};
