#include "Player.h"

int Player::players(0);

int Player::get_num_players(){
    return players;
}

Player::Player(std::string name_,int health_,int xp_):name{name_},health{health_},xp{xp_}{
    std::cout << "Constructor Called" << std::endl;
    ++players;
}

Player::Player(const Player &source)
    //:name{source.name},health{source.health},xp{source.xp}
    :Player(source.name,source.health,source.xp){
    std::cout << "Copy Constructor called for Name: "<< source.name << std::endl;
}

