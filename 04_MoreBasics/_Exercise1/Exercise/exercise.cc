#include <iostream>

#include "exercise.h"

void player_pos( PlayerData &player )
{
    std::cout << "Player_" << player.id << " Position:\n";
    std::cout << "\tX: " << player.x_pos << "\n";
    std::cout << "\tY: " << player.y_pos << "\n";
}

void player_pos_pointer( PlayerData *player )
{
    std::cout << "\nPointer to player pos:\n";
    std::cout << "Player_" << player->id << " Position:\n";
    std::cout << "\tX: " << player->x_pos << "\n";
    std::cout << "\tY: " << player->y_pos << "\n";
}
