#ifndef BACKGROUND_H
#define BACKGROUND_H

#include "utils.hpp"

class Background{

public:
    Background(std::string backgroundPath, std::string m1Path, std::string m2Path, sf::Vector2f m1Pos, sf::Vector2f m2Pos);
    void setParameters(std::string backgroundPath, std::string m1Path, std::string m2Path, sf::Vector2f m1Pos, sf::Vector2f m2Pos);
    void update(float deltaTime);
    void evolve(bool monster);//false per monstre 1, true per monstre 2
    void draw(sf::RenderTarget* window);
    void init();

private:
    sf::Texture _tMonster1;
    sf::Texture _tMonster2;
    sf::Texture _tBackground;

    sf::Sprite _monster1;
    sf::Sprite _monster2;
    sf::Sprite _background;

    float _time;

    int _m1Evolution;
    int _m2Evolution;
    int _m1Frame;
    int _m2Frame;

    void _updateSprites();
};

#endif // BACKGROUND_H
