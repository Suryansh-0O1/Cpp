#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player{
    private:
    // Attribute
    std::string name;
    int health;
    int xp;
    
    public:
    //Method
    string get_name(){return name;};
    int get_health(){return health;};
    int get_xp(){return xp;};
   
    Player(std::string name_="None", int health_=0,  int xp_=0);
    //Copy Constructor
    Player(const Player &source);

    ~Player(){ cout << "Distructor for "  << name << endl;}
};

Player::Player(std::string name_,int health_,int xp_):name{name_},health{health_},xp{xp_}{
    cout << "Constructor Called" << endl;
}

Player::Player(const Player &source)
    //:name{source.name},health{source.health},xp{source.xp}
    :Player(source.name,source.health,source.xp){
    cout << "Copy Constructor called for Name: "<< source.name << endl;
}

    void display_player(Player p){
        cout << "Name: " << p.get_name() << endl;
        cout << "Health: " << p.get_health() << endl;
        cout << "Xp: " << p.get_xp() << endl;
    }

int main(){
    Player empty;
    
    Player New_player{empty};
    
    display_player(New_player);
    
    Player suryansh{"Suryansh"};
    Player tim{"Tim",100};
    Player frank{"Frank",100,15};
    return 0;
}