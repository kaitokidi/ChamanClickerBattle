#ifndef __GLYPH_HPP__
#define __GLYPH_HPP__

#include <SFML/Graphics.hpp>

#include "utils.hpp"

class Glyph {
public:
  Glyph();
  Glyph(GlyphID id);
  ~Glyph();

  void draw(sf::RenderTarget* target);
  void setPosition(sf::Vector2f pos);
  void setSize(sf::Vector2f size);
  void setSize(float width, float height);
  void setRenderTarget(sf::RenderTarget* t);
  GlyphID getID();
  sf::Vector2f getSize();
  void setComplete();
  bool isComplete();

protected:

  sf::Sprite _sprite;
  GlyphID _id;
  bool _complete;
};

#endif
