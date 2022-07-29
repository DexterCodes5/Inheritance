#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account {name, balance, int_rate}, i{0} {
        
}

bool Trust_Account::deposit(double amount) {
    if (amount >= 5000)
        amount += 50;
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    i++;
    if (i >= 4 || amount > balance * 0.2)
        return false;
        
    return Savings_Account::withdraw(amount);
    
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, withdraws: " << account.i << "]";
    return os;
}