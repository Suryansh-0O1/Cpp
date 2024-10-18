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
    Player();
    Player(std::string name_);
    Player(std::string name_, int health_,  int xp_);
};

Player::Player():name{"None"},health{0},xp{0}{
    
}

Player::Player(std::string name_):name{name_},health{0},xp{0}{
    
}

Player::Player(std::string name_,int health_,int xp_):name{name_},health{health_},xp{xp_}{
    
}

int main(){
    Player empty;
    Player suryansh{"Suryansh"};
    Player frank{"Frank",100,15};
    return 0;
}