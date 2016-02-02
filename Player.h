#ifndef PLAYER_H
#define PLAYER_H

#include "utils.hpp"

class Player
{
public:
    Player();
    Player(std::string path, sf::Vector2f pos);
    void update(float deltaTime);
    void setParameters(std::string path, sf::Vector2f pos);
    //0 for idle, 1 for regular action (move object, craft object, etc.) , 2 for attack
    void changeState(status::playerStatus state);
    void draw(sf::RenderTarget* window);
private:
    sf::Texture _texture;
    sf::Sprite _sprite;
    status::playerStatus _status;
    int _frame;
    float _time;
    void _updateSprites();
};

#endif // PLAYER_H
