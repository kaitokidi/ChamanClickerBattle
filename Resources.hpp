#ifndef __RESOURCES_HPP__
#define __RESOURCES_HPP__

#include "utils.hpp"

class Resources {
public:
    static void load();

    //DEFINE AS STATIC THE RESOURCES YOU WANT
    //static sf::Texture ...
    static sf::Texture key;
    static sf::Texture talkBox;
    static sf::Shader cInvert;
    static sf::Font pauseMenuFont;
    static std::vector<SpriteSheetDescription> descriptions;

    static sf::Texture             objectiveBg;
    static sf::Texture             actualBgOrc;
    static sf::Texture             spellingBgOrc;
    static sf::Texture             inventoryBgOrc;

    static sf::Texture             objectiveCham;
    static sf::Texture             actualBgCham;
    static sf::Texture             spellingBgCham;
    static sf::Texture             inventoryBgCham;
    static sf::Texture             background;

  static sf::Texture glyphUP;
    // glyphDOWN:
  static sf::Texture  glyphDOWN;
    // glyphRIGHT:
  static sf::Texture  glyphRIGHT;
    // glyphLEFT:
  static sf::Texture  glyphLEFT;
    // glyph11:
  static sf::Texture  glyph11;
    // glyph12:
  static sf::Texture  glyph12;
    // glyph13:
  static sf::Texture  glyph13;
    // glyph14:
  static sf::Texture  glyph14;
    // glyph15:
  static sf::Texture  glyph15;
    // glyph16:
  static sf::Texture  glyph16;
    // glyph17:
  static sf::Texture  glyph17;
    // glyph18:
  static sf::Texture  glyph18;
    // glyph19:
  static sf::Texture  glyph19;
    // glyph21:
  static sf::Texture  glyph21;
    // glyph22:
  static sf::Texture  glyph22;
    // glyph23:
  static sf::Texture  glyph23;
    // glyph24:
  static sf::Texture  glyph24;
    //glyph 25:
  static sf::Texture  glyph25;
    // glyph26:
  static sf::Texture  glyph26;
    // glyph31:
  static sf::Texture  glyph31;
    // glyph32:
  static sf::Texture  glyph32;
    // glyph33:
  static sf::Texture  glyph33;

    static sf::Texture             recipesBg;


private:
    static SpriteSheetDescription loadDescription(std::string fileName);

};

#endif
