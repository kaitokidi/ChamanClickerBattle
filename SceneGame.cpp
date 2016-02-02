#include "SceneGame.hpp"

SceneGame::SceneGame(Game *g, sf::RenderWindow *w) :
    Scene(g, w, sceneTypes::testScene, "end") ,
    _background(TEXTURETPATH + std::string("stonegenge_background_small.png"), TEXTURETPATH + std::string("garrapato_vermell.png"),
                TEXTURETPATH + std::string("garrapato_verd.png"), sf::Vector2f(0,10), sf::Vector2f(230,10))
{
    _chamans.first.setParameters(TEXTURETPATH + std::string("Orc_shaman_animations.png"), sf::Vector2f(20,172));
    _chamans.second.setParameters(TEXTURETPATH + std::string("Orco.png"), sf::Vector2f(280,172));

    _next = "end";
    _view = _window->getDefaultView();
    if(! _glyphTexture.loadFromFile(TEXTURETPATH + std::string("glyps.png"))) std::cout << ": ( not loaded texture " << std::endl;
    glyphSize = _glyphTexture.getSize().x/22;

    _clicks.first = _clicks.second = 1;
    _evolutions.first = _evolutions.second = 0;
    initView(&_view, sf::Vector2i(450,300));
}

SceneGame::~SceneGame() {}

void SceneGame::init(sf::Vector2f aux) {}

void SceneGame::update(float deltaTime){
    _background.update(deltaTime);

    _chamans.first.update(deltaTime);
    _chamans.second.update(deltaTime);


    if(InputManager::action(InputAction::firstAction)){
        ++_clicks.first;
        if(_clicks.first%20 == 0){
            int random = rand()%2;
            if(random == 0){
                SoundManager::playSound("action");
                _chamans.first.changeState(status::action);
            }
            else {
                SoundManager::playSound("attack");
                _chamans.first.changeState(status::attack);
            }

            moveEffects.first.init(sf::Vector2i(70,172),sf::Vector2i(390,172),_glyphTexture);
            moveEffects.first.setTextureRect(sf::IntRect(0+glyphSize*(rand()%21),0,glyphSize,glyphSize));

        }

    }

    if(InputManager::action(InputAction::secondAction)){
        ++_clicks.second;
        if(_clicks.second%20 == 0){
            int random = rand()%2;
            if(random == 0){
                SoundManager::playSound("action");
                _chamans.second.changeState(status::action);
            }
            else {
                SoundManager::playSound("attack");
                _chamans.second.changeState(status::attack);
            }

            moveEffects.second.init(sf::Vector2i(300,172),sf::Vector2i(40,172),_glyphTexture);
            moveEffects.second.setTextureRect(sf::IntRect(+glyphSize*(rand()%21),0,glyphSize,glyphSize));

        }
    }

    moveEffects.first.update(deltaTime);
    moveEffects.second.update(deltaTime);

    if(_clicks.first%(25*(_evolutions.first+1)) == 0) { _background.evolve(false); _clicks.first = 1; ++_evolutions.first; }
    if(_clicks.second%(25*(_evolutions.first+1)) == 0){ _background.evolve(true); _clicks.second = 1; ++_evolutions.second;}

    if(_evolutions.first > 3) { minit(); changeScene("EndRed"); SoundManager::playSound("bossRed"); }
    if(_evolutions.second > 3) { minit(); changeScene("EndGreen"); SoundManager::playSound("bossGreen"); }

}

void SceneGame::minit(){
    _background.init();
    _clicks.first = _clicks.second = 1;
    _evolutions.first = _evolutions.second = 0;
}
void SceneGame::processInput(){
    InputManager::update(_window);
    if(InputManager::action(InputAction::reset)) {
        minit();
    }
}

void SceneGame::render(sf::RenderTarget *target){
    _background.draw(target);
    _chamans.first.draw(target);
    _chamans.second.draw(target);
    if(moveEffects.first.alive()) target->draw(moveEffects.first);
    if(moveEffects.second.alive()) target->draw(moveEffects.second);
}

void SceneGame::resizing() {

}


