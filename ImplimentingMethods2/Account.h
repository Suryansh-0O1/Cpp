#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account{
    private:
    // Attributes
    std::string name;
    double balance;
    
    public:
    // Methods
    void setBalance(double bal){
        balance=bal;
    }
    double getBalance(){
        return balance;
    }
    
    
    void setName(std::string n);
    std::string getName();
    
    
    void deposit(double bal);
    void withdrawl(double bal);
};

#endif 