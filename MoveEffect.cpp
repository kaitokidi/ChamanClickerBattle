#include "MoveEffect.hpp"

MoveEffect::MoveEffect(){
    _alive = false;
}

MoveEffect::MoveEffect(sf::Vector2i ini, sf::Vector2i end, sf::Texture& texture) {
    init(ini, end, texture);
}

void MoveEffect::init(sf::Vector2i ini, sf::Vector2i end, sf::Texture &texture) {
    _end = end;

    setTexture(texture);

    setPosition(sf::Vector2f(ini.x,ini.y));

    //float angle = getAngle(sf::Vector2f(ini.x,ini.y),sf::Vector2f(end.x,end.y));
    _v.x = -( ini.x - end.x )*0.5;
    _v.y = -( ini.y - end.y )*0.5;
    _alive = true;

    setScale(0.5,0.5);
}


MoveEffect::~MoveEffect(){}

void MoveEffect::update(float deltaTime){
    if(_alive) {
        move(_v*deltaTime);
        rotate(60*deltaTime);
        if ((abs(getPosition().x - _end.x) + abs(getPosition().y - _end.y)) < 10){
            _alive = false;
        }
    }
}

bool MoveEffect::alive(){
    return _alive;
}
