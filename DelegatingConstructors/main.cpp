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
    Player();
    Player(std::string name_);
    Player(std::string name_, int health_,  int xp_);
};

Player::Player(std::string name_,int health_,int xp_):name{name_},health{health_},xp{xp_}{
    
}

Player::Player():Player("None",0,0){
    
}

Player::Player(std::string name_):Player(name_,0,0){
    
}

int main(){
    Player empty;
    Player suryansh{"Suryansh"};
    Player frank{"Frank",100,15};
    return 0;
}