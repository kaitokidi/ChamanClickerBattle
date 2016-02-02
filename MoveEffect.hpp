#ifndef MOVEEFFECT_HPP
#define MOVEEFFECT_HPP
#include "utils.hpp"

class MoveEffect : public sf::Sprite
{

public:

    MoveEffect();
    ~MoveEffect();
    MoveEffect(sf::Vector2i ini, sf::Vector2i end, sf::Texture &texture);
    void init(sf::Vector2i ini, sf::Vector2i end, sf::Texture &texture);

    bool alive();
    void update(float deltaTime);

private:

    sf::Vector2i _end;
    sf::Vector2f _v;

    bool _alive;
};

#endif // MOVEEFFECT_HPP
