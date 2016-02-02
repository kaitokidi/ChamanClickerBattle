#include "Background.h"

Background::Background(std::string backgroundPath, std::string m1Path, std::string m2Path, sf::Vector2f m1Pos, sf::Vector2f m2Pos){
    setParameters(backgroundPath, m1Path, m2Path, m1Pos, m2Pos);
}//2

void Background::setParameters(std::string backgroundPath, std::string m1Path, std::string m2Path, sf::Vector2f m1Pos, sf::Vector2f m2Pos){
    if(!_tBackground.loadFromFile(backgroundPath))  std::cout << "failed to load background texture!! 2 faggots" <<  std::endl;
    _background.setTexture(_tBackground);
    _background.setPosition(0,0);

    if(!_tMonster1.loadFromFile(m1Path))  std::cout << "failed to load monster 1 texture!!" <<  std::endl;
    _monster1.setTexture(_tMonster1);
    _monster1.setPosition(m1Pos);
    _monster1.setTextureRect(sf::IntRect(0,0,_tMonster1.getSize().x/M_FRAME_NUM, _tMonster1.getSize().y/M_EVOL_NUM));

    if(!_tMonster2.loadFromFile(m2Path))  std::cout << "failed to load monster 2 texture!!" <<  std::endl;
    _monster2.setTexture(_tMonster2);
    _monster2.setPosition(m2Pos);
    _monster2.setTextureRect(sf::IntRect(0,0,_tMonster2.getSize().x/M_FRAME_NUM, _tMonster2.getSize().y/M_EVOL_NUM));

    _m1Evolution = _m2Evolution = -1;

    _m1Frame = 0;
    _m2Frame = 0;

}

void Background::update(float deltaTime){
    _time += deltaTime;
    if(_time >= FRAME_DELAY){
        _time = 0;
        _updateSprites();
    }
}

void Background::draw(sf::RenderTarget *window){
    window->draw(_background);
    window->draw(_monster1);
    window->draw(_monster2);
}

void Background::init(){
    _m1Evolution = _m2Evolution = -1;
    _m1Frame = _m2Frame = 0;
}

void Background::evolve(bool monster){
    if(monster) ++_m2Evolution;
    else ++_m1Evolution;
}

void Background::_updateSprites(){

    _m1Frame = (_m1Frame+1)%M_FRAME_NUM;
    _m2Frame = (_m2Frame+1)%M_FRAME_NUM;

    _monster1.setTextureRect(sf::IntRect(_m1Frame*(_tMonster1.getSize().x/M_FRAME_NUM), _m1Evolution*(_tMonster1.getSize().y/M_EVOL_NUM),
                                         _tMonster1.getSize().x/M_FRAME_NUM, _tMonster1.getSize().y/M_EVOL_NUM));

    _monster2.setTextureRect(sf::IntRect(_m2Frame*(_tMonster2.getSize().x/M_FRAME_NUM), _m2Evolution*(_tMonster2.getSize().y/M_EVOL_NUM),
                                         _tMonster2.getSize().x/M_FRAME_NUM, _tMonster2.getSize().y/M_EVOL_NUM));
}
