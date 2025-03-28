#pragma once


enum class Team
{
    ALLIED = 1,
    ENEMY = 2,
};

struct PlayerData
{
    std::uint32_t id;
    float x_pos;
    float y_pos;
    std::uint32_t health;
    std::uint32_t energy;
    Team team;
};

void player_pos( PlayerData &player );
void player_pos_pointer( PlayerData *player );
