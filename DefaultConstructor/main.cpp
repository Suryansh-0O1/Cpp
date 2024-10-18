#include <iostream>
#include <vector>
#include <string>

class Player{
    private:
    // Attribute
    std::string name;
    int health;
    int xp;
    
    public:
    //Method
    Player(std::string name_="None", int health_=0,  int xp_=0);
};

Player::Player(std::string name_,int health_,int xp_):name{name_},health{health_},xp{xp_}{
    
}

int main(){
    Player empty;
    Player suryansh{"Suryansh"};
    Player tim{"Tim",100};
    Player frank{"Frank",100,15};
    return 0;
}