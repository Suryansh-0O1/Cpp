#include <iostream>
#include "Player.h"

using namespace std; 

void displayPlayers(){
    cout << "No of players: " << Player::get_num_players() << endl;
}

int main()
{
    displayPlayers();
    Player a{"a"};
    displayPlayers();
    Player b{"b"};
    displayPlayers();
    return 0;
}
