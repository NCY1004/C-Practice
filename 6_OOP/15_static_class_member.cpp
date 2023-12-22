#include "15_player.h"

int Player::num_player{0};

Player::Player(string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val} {
        ++num_player;
    }

Player::Player(const Player &source)
    :Player {source.name, source.health, source.xp}{
    }

Player::~Player(){
    --num_player;
}

int Player::get_num_players(){
    return num_player;
}