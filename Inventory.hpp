#ifndef __INVENTORY__
#define __INVENTORY__
 
#include "GlyphContainer.hpp"

class Inventory : public GlyphContainer {
public:
  Inventory(const sf::Texture& text, GlyphContainer* curr_object);
  ~Inventory();

  void rotate();
  void attackWith(GlyphID gid);
  void firstToActualGlyph();
  void setCurrentGlyph(GlyphContainer* p);
  void init();
  GlyphID getGlyphIDByIndex(int index);

private:
  GlyphContainer* _current_object;
};

#endif
