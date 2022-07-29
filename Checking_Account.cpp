#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account {name, balance}, fee {def_fee} {
        
}

bool Checking_Account::withdraw(double amount) {
    amount += fee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os << "[Checkings_Account: " << account.name << ": " << account.balance << "]";
    return os;
}