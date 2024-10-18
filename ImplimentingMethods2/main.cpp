#include <iostream>
#include <string>
#include "Account.h"

int main(){
    Account suryansh_account;
    suryansh_account.setName("Suryansh");
    suryansh_account.setBalance(10000);
    suryansh_account.deposit(5000);
    suryansh_account.withdrawl(1000);
    std::string x{suryansh_account.getName()};
    std::cout <<  x << std::endl;
    double y{suryansh_account.getBalance()};
    std::cout << y << std::endl;
    return 0;
}
