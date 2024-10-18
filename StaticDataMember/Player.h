#ifndef _PLAYER_H
#define _PLAYER_H
#include <string>
#include <iostream>

class Player
{
private:
    // Attribute
    static int players;
    std::string name;
    int health;
    int xp;
    
    public:
    //Method
    std::string get_name(){return name;};
    int get_health(){return health;};
    int get_xp(){return xp;};
   
    Player(std::string name_="None", int health_=0,  int xp_=0);
    //Copy Constructor
    Player(const Player &source);

    ~Player(){ 
        std::cout << "Distructor for "  << name << std::endl;
        --players;
    }
    
    static int get_num_players();
    
};

#endif // _PLAYER_H
