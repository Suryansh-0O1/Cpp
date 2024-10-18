#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player{
    private:
    // Attribute
    string name;
    int health;
    int xp;
    
    public:
    //Method
    void talk(string text){
        cout << name << " says " << text << endl;
    }
    bool dead();
};

class Account{
    private:
    // Attributes
    string name;
    double balance;
    
    public:
    // Methods
    bool deposit(double bal){
        balance+=bal;
        cout << "In Deposit" << endl; 
    }
    bool withdrawl(double bal){
        balance -=bal;
        cout << "In Withdrawl" << endl;
    }
};

int main(){
    
    Account frank_account;
    frank_account.name="Frank";
    frank_account.balance  = 5000;
    frank_account.deposit(1000.0);
    frank_account.withdrawl(500.0);
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi There!");
    //Player suryansh;
    
//    Player players[] {frank,suryansh};
//
//    vector<Player> players_vec{frank};
//    players_vec.push_back(suryansh);
//    
    Player *enemy = new Player;
    enemy->name = "Enemy";
    enemy->health = 100;
    enemy->xp=15;
    
    enemy->talk("I'll destroy you!");
    delete enemy;
    
    return 0;
}
