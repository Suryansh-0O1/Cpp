#include "Account.h"

void Account :: setName(std::string n){
    name = n;
}

string Account :: getName(){
    return name;
}

void Account :: deposit(double bal){
        balance+=bal;
        std::cout << "In Deposit" << endl; 
    }
    
void Account :: withdrawl(double bal){
        balance -=bal;
        std::cout << "In Withdrawl" << endl;
    }