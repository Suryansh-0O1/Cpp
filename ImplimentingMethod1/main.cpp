#include <iostream>
#include <string>

using namespace std;

class Account{
    private:
    // Attributes
    string name;
    double balance;
    
    public:
    // Methods
    void setBalance(double bal){
        balance=bal;
    }
    double getBalance(){
        return balance;
    }
    
    
    void setName(string n);
    string getName();
    
    
    void deposit(double bal);
    void withdrawl(double bal);
};


int main(){
    Account suryansh_account;
    suryansh_account.setName("Suryansh");
    suryansh_account.setBalance(10000);
    suryansh_account.deposit(5000);
    suryansh_account.withdrawl(1000);
    string x{suryansh_account.getName()};
    cout <<  x << endl;
    double y{suryansh_account.getBalance()};
    cout << y << endl;
    return 0;
}


void Account :: setName(string n){
    name = n;
}

string Account :: getName(){
    return name;
}

void Account :: deposit(double bal){
        balance+=bal;
        cout << "In Deposit" << endl; 
    }
    
void Account :: withdrawl(double bal){
        balance -=bal;
        cout << "In Withdrawl" << endl;
    }