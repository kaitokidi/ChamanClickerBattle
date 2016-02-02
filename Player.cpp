#include "Player.h"

Player::Player(){}

Player::Player(std::string path, sf::Vector2f pos){
    setParameters(path, pos);
}

void Player::setParameters(std::string path, sf::Vector2f pos){
    if(!_texture.loadFromFile(path)) std::cout << "failed loading player texture" << std::endl;
    _sprite.setTexture(_texture);
    _sprite.setTextureRect(sf::IntRect(0,0,_texture.getSize().x/PLAYER_FRAME_NUM, _texture.getSize().y/PLAYER_STATE_NUM));
    _sprite.setPosition(pos);
    _status = status::playerStatus::idle;
    _frame = 0;
    _time = 0;
    std::cout << "YO" << std::endl;
}


void Player::update(float deltaTime){
    _time += deltaTime;
    if(_time >= FRAME_DELAY){
        _time = 0;
        _updateSprites();
    }
}

void Player::changeState(status::playerStatus state){

     _status = state;
     _frame = 0;
          /*
    switch (state){
        case (0) :
            _status = status::playerStatus::idle;
            break;
        case(1) :
            _status = status::playerStatus::action;
            break;
        case (2) :
            _status = status::playerStatus::attack;
            break;
    default:
        break;
    }*/
}

void Player::draw(sf::RenderTarget *window){
    window->draw(_sprite);
}

void Player::_updateSprites(){

    if(_status != status::playerStatus::idle && _frame == PLAYER_FRAME_NUM-1) _status = status::playerStatus::idle;
    _frame = (_frame+1)%PLAYER_FRAME_NUM;
    _sprite.setTextureRect(sf::IntRect(_frame*(_texture.getSize().x/PLAYER_FRAME_NUM), _status*(_texture.getSize().y/PLAYER_STATE_NUM),_texture.getSize().x/PLAYER_FRAME_NUM, _texture.getSize().y/PLAYER_STATE_NUM));
}
