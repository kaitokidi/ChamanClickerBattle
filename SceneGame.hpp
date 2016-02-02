#ifndef SCENEGAME_HPP
#define SCENEGAME_HPP
#include "Player.h"
#include "Scene.hpp"
#include "utils.hpp"
#include "Background.h"
#include "Resources.hpp"
#include "MoveEffect.hpp"

class SceneGame : public Scene {

public:
    SceneGame(Game* g, sf::RenderWindow* w);

    ~SceneGame();

    void init(sf::Vector2f aux = sf::Vector2f(0,0));

    void update(float deltaTime);

    void processInput();

    void render(sf::RenderTarget* target);

    void resizing();

    void minit();
private:

    std::string _next;

    float glyphSize;
    Background _background;
    sf::Texture _glyphTexture;
    std::pair<int, int> _clicks;
    std::pair<int, int> _evolutions;
    std::pair<Player,Player> _chamans;
    std::pair<MoveEffect, MoveEffect> moveEffects;


};

#endif // SCENEGAME_HPP
