#include <iostream>

#include "exercise.h"


int main()
{
    PlayerData player_1 = { .id = 1, .x_pos = 4.5f, .y_pos = 6.2f, .health = 100, .energy = 100, .team = Team::ALLIED };
    PlayerData player_2 = { .id = 2, .x_pos = 6.3f, .y_pos = 7.5f, .health = 100, .energy = 100, .team = Team::ENEMY };

    player_pos( player_1 );
    player_pos_pointer( &player_2 );

    return 0;
}
