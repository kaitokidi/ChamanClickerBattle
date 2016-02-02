#include "Resources.hpp"

//PLACE HERE THE RESOURCES YOU WANT TO LOAD

// sf::Texture        Resources::....
sf::Texture            Resources::key;
sf::Texture            Resources::talkBox;
sf::Shader             Resources::cInvert;
sf::Font               Resources::pauseMenuFont;
std::vector<SpriteSheetDescription> Resources::descriptions;

//Orc textures
sf::Texture             Resources::objectiveBg;
sf::Texture             Resources::actualBgOrc;
sf::Texture             Resources::spellingBgOrc;
sf::Texture             Resources::inventoryBgOrc;

//Silvan textures
sf::Texture             Resources::objectiveCham;
sf::Texture             Resources::actualBgCham;
sf::Texture             Resources::spellingBgCham;
sf::Texture             Resources::inventoryBgCham;
sf::Texture             Resources::background;

//   ____    _    _   _ ____  _   _ ____
//  / ___|  / \  | \ | / ___|| | | |  _ \
// | |     / _ \ |  \| \___ \| | | | |_) |
// | |___ / ___ \| |\  |___) | |_| |  _ <
//  \____/_/   \_\_| \_|____/ \___/|_| \_\


// switch(id) {
// glyphUP:
sf::Texture Resources::glyphUP;
// glyphDOWN:
sf::Texture  Resources::glyphDOWN;
// glyphRIGHT:
sf::Texture  Resources::glyphRIGHT;
// glyphLEFT:
sf::Texture  Resources::glyphLEFT;
// glyph11:
sf::Texture  Resources::glyph11;
// glyph12:
sf::Texture  Resources::glyph12;
// glyph13:
sf::Texture  Resources::glyph13;
// glyph14:
sf::Texture  Resources::glyph14;
// glyph15:
sf::Texture  Resources::glyph15;
// glyph16:
sf::Texture  Resources::glyph16;
// glyph17:
sf::Texture  Resources::glyph17;
// glyph18:
sf::Texture  Resources::glyph18;
// glyph19:
sf::Texture  Resources::glyph19;
// glyph21:
sf::Texture  Resources::glyph21;
// glyph22:
sf::Texture  Resources::glyph22;
// glyph23:
sf::Texture  Resources::glyph23;
// glyph24:
sf::Texture  Resources::glyph24;
//glyph 25:
sf::Texture  Resources::glyph25;
// glyph26:
sf::Texture  Resources::glyph26;
// glyph31:
sf::Texture  Resources::glyph31;
// glyph32:
sf::Texture  Resources::glyph32;
// glyph33:
sf::Texture  Resources::glyph33;
// }


//        ____    _    _   _ ____  _   _ ____
//    /  / ___|  / \  | \ | / ___|| | | |  _ \
//   /  | |     / _ \ |  \| \___ \| | | | |_) |
//  /   | |___ / ___ \| |\  |___) | |_| |  _ <
// /     \____/_/   \_\_| \_|____/ \___/|_| \_\

sf::Texture             Resources::recipesBg;



void Resources::load() {
    //LOAD THE INFORMATION IN THE VARIABLES
    //...loadFromFile(); or whatever
    key.loadFromFile                    (TEXTURETPATH+std::string("key.png"));

    actualBgOrc.loadFromFile                    (TEXTURETPATH+std::string("key.png"));
    objectiveBg.loadFromFile                    (TEXTURETPATH+std::string("key.png"));
    spellingBgOrc.loadFromFile                  (TEXTURETPATH+std::string("key.png"));
    inventoryBgOrc.loadFromFile                 (TEXTURETPATH+std::string("key.png"));

    actualBgCham.loadFromFile                   (TEXTURETPATH+std::string("key.png"));
    objectiveCham.loadFromFile                  (TEXTURETPATH+std::string("key.png"));
    spellingBgCham.loadFromFile                 (TEXTURETPATH+std::string("key.png"));
    inventoryBgCham.loadFromFile                (TEXTURETPATH+std::string("key.png"));

    recipesBg.loadFromFile                      (TEXTURETPATH+std::string("key.png"));

    talkBox.loadFromFile                (TEXTURETPATH+std::string("talkBox.png"));

    background.loadFromFile             (TEXTURETPATH+std::string("background.png"));

    // switch(id) {
    // glyphUP:
    glyphUP.loadFromFile                    (TEXTURETPATH+std::string("glyph-up.png"));
    // glyphDOWN:
    glyphDOWN.loadFromFile                    (TEXTURETPATH+std::string("glyph-down.png"));
    // glyphRIGHT:
    glyphRIGHT.loadFromFile                    (TEXTURETPATH+std::string("glyph-right.png"));
    // glyphLEFT:
    glyphLEFT.loadFromFile                    (TEXTURETPATH+std::string("glyph-left.png"));


    // glyph11:
    glyph11.loadFromFile                    (TEXTURETPATH+std::string("glyph-1-05.png"));
    // glyph12:
    glyph12.loadFromFile                    (TEXTURETPATH+std::string("glyph-1-06.png"));
    // glyph13:
    glyph13.loadFromFile                    (TEXTURETPATH+std::string("glyph-1-07.png"));
    // glyph14:
    glyph14.loadFromFile                    (TEXTURETPATH+std::string("glyph-1-08.png"));
    // glyph15:
    glyph15.loadFromFile                    (TEXTURETPATH+std::string("glyph-1-09.png"));
    // glyph16:
    glyph16.loadFromFile                    (TEXTURETPATH+std::string("glyph-1-01.png"));
    // glyph17:
    glyph17.loadFromFile                    (TEXTURETPATH+std::string("glyph-1-02.png"));
    // glyph18:
    glyph18.loadFromFile                    (TEXTURETPATH+std::string("glyph-1-03.png"));
    // glyph19:
    glyph19.loadFromFile                    (TEXTURETPATH+std::string("glyph-1-04.png"));


    // glyph21:
    glyph21.loadFromFile                    (TEXTURETPATH+std::string("glyph-2-04.png"));
    // glyph22:
    glyph22.loadFromFile                    (TEXTURETPATH+std::string("glyph-2-06.png"));
    // glyph23:
    glyph23.loadFromFile                    (TEXTURETPATH+std::string("glyph-2-03.png"));
    // glyph24:
    glyph24.loadFromFile                    (TEXTURETPATH+std::string("glyph-2-01.png"));
    // glyph25:
    glyph25.loadFromFile                    (TEXTURETPATH+std::string("glyph-2-05.png"));
    // glyph26:
    glyph26.loadFromFile                    (TEXTURETPATH+std::string("glyph-2-02.png"));


    // glyph31:
    glyph31.loadFromFile                    (TEXTURETPATH+std::string("glyph-3-01.png"));
    // glyph32:
    glyph32.loadFromFile                    (TEXTURETPATH+std::string("glyph-3-02.png"));
    // glyph33:
    glyph33.loadFromFile                    (TEXTURETPATH+std::string("glyph-3-03.png"));

   // descriptions = std::vector<SpriteSheetDescription>(spriteDescriptionsQtt);
   // descriptions[linkSpritesDescriptions]       = loadDescription("linkSheet");

    if (!cInvert.loadFromFile           (SHADERPATH+std::string("invert.frag"), sf::Shader::Fragment)) exit(EXIT_FAILURE);

    if (!pauseMenuFont.loadFromFile("Resources/Fonts/font.ttf")) exit(EXIT_FAILURE);
}


//ONLY USED IF USING DESCRIPTORS
SpriteSheetDescription Resources::loadDescription(std::string fileName) {
    std::string filePath = TEXTURETPATH + fileName + TEXTUREDESCRIPTIONEXTENSION;
    SpriteSheetDescription ret;
    // leer el fichero
    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cout << "Error opening file on resources loadDescription " << filePath << std::endl;
        exit(EXIT_FAILURE);
    }
    std::vector<std::pair<int, std::string> > v;
    int lineNum = 0;
    std::string line;
    while (getline(file,line)) {
        ++lineNum;
        for (int i = 0; i < int(line.size()-1); ++i) {
            if (line[i] == '/' && line[i+1] == '/') {
                line = line.substr(0,i);
                break;
            }
        }
        std::istringstream aux(line);
        std::string s;
        while(aux >> s) 
            v.push_back(std::make_pair(lineNum,s));
    }
    SpriteSheetDescription ssd;
    std::map<std::string, int> positions;
    for (int  i = 0; i < int(v.size()); ++i) {
        lineNum = v[i].first;
        std::string key = v[i].second;
        int descriptorPosition;
        if (positions.find(key) == positions.end()) {
            descriptorPosition = positions.size();
            positions.insert(std::make_pair(key,descriptorPosition));
            ssd.push_back(std::vector<sf::IntRect>());
        }
        else {
            descriptorPosition = positions[key];
        }
        //std::cout << "insertando la key " << key << " en la posicion " << descriptorPosition << std::endl;

        if (i+4 >= int(v.size()) || 
            !isInt(v[i+1].second) || 
            !isInt(v[i+2].second) || 
            !isInt(v[i+3].second) || 
            !isInt(v[i+4].second)) {
            std::cout << "Error in line " << lineNum << ": four integers are needed" << std::endl;
            exit(EXIT_FAILURE);
        }
        sf::IntRect intRect(myStoi(v[i+1].second),
            myStoi(v[i+2].second),
            myStoi(v[i+3].second),
            myStoi(v[i+4].second));
        ssd[descriptorPosition].push_back(intRect);
        i += 4;
    }

    return ssd;
}
