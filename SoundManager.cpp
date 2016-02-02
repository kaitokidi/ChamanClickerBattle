#include "SoundManager.hpp"

//PLACE HERE A FORWARD DECLARATION OF YOUR STATIC VARIABLES
//sf::SoundBuffer     SoundManager::SOUND_NAME;
//sf::Music           SoundManager::MUSIC_NAME;

/* Example:
sf::Music           SoundManager::overWorldMusic;*/
sf::SoundBuffer     SoundManager::bossRed;
sf::SoundBuffer     SoundManager::bossGreen;
sf::SoundBuffer     SoundManager::actionBuf;
sf::SoundBuffer     SoundManager::attackBuf;



std::map<std::string, sf::Sound> SoundManager::soundMap;
std::map<std::string, sf::Music> SoundManager::musicMap;
std::map<std::string, sf::Sound>::iterator SoundManager::sit;
std::map<std::string, sf::Music>::iterator SoundManager::mit;


void SoundManager::load(){

    //LOAD HERE YOUR SOUNDS AND MUSIC
    //(previously declared static on private and writted the forward declaration on top of this class)

    /* Example:
    musicMap["overWorld"].openFromFile("Resources/Sounds/overWorld.ogg");
    if(!attackBuf.loadFromFile("Resources/Sounds/attack.ogg")){ std::cout << "Fail on loading attack" << std::endl;};
    soundMap["chamaleonTongue"].setBuffer(attackBuf);
    */
    musicMap["music"].openFromFile("Resources/Sounds/music.ogg");
    if(!attackBuf.loadFromFile("Resources/Sounds/attack.ogg")){ std::cout << "Fail on loading attack sound" << std::endl;};
    soundMap["attack"].setBuffer(attackBuf);
    if(!actionBuf.loadFromFile("Resources/Sounds/action.ogg")){ std::cout << "Fail on loading attack sound" << std::endl;};
    soundMap["action"].setBuffer(actionBuf);
    if(!bossGreen.loadFromFile("Resources/Sounds/Boss2.ogg")){ std::cout << "Fail on load boss2 sound" << std::endl; };
    soundMap["bossGreen"].setBuffer(bossGreen);
    if(!bossRed.loadFromFile("Resources/Sounds/Boss1.ogg")){ std::cout << "Fail on load boss1 sound" << std::endl; };
    soundMap["bossRed"].setBuffer(bossRed);

}



void SoundManager::playSound(std::string name){
    sit = soundMap.find(name);
    if (sit != soundMap.end()) (sit->second).play();
}

void SoundManager::playMusic(std::string name){
mit = musicMap.find(name);
if (mit != musicMap.end()) (mit->second).play();

}

void SoundManager::stopMusic(std::string name){
    mit = musicMap.find(name);
    if (mit != musicMap.end()) (mit->second).stop();

}

void SoundManager::pauseMusic(std::string name){
    mit = musicMap.find(name);
    if (mit != musicMap.end()) (mit->second).pause();

}

void SoundManager::setLoop(bool loop, std::string name){
    mit = musicMap.find(name);
    if (mit != musicMap.end()) (mit->second).setLoop(loop);

}

void SoundManager::setPitch(float pitch, std::string name){
    mit = musicMap.find(name);
    if (mit != musicMap.end()) (mit->second).setPitch(pitch);
}

void SoundManager::setVolume(float volume, std::string name){
    mit = musicMap.find(name);
    if (mit != musicMap.end()) (mit->second).setVolume(volume);
}

void SoundManager::setPosition(float x, float y, float z, std::string name){
    mit = musicMap.find(name);
    if (mit != musicMap.end()) (mit->second).setPosition(x,y,z);
}


void SoundManager::setGlobalSoundVolumen(float volume) {
    for (auto it = soundMap.begin(); it != soundMap.end(); ++it) (it->second).setVolume(volume);
}

void SoundManager::setGlobalMusicVolumen(float volume) {
    for (auto it = musicMap.begin(); it != musicMap.end(); ++it) (it->second).setVolume(volume);
}
