#ifndef __INPUTGLYPHS__
#define __INPUTGLYPHS__

#include "GlyphContainer.hpp"

class InputGlyphs : public GlyphContainer {
public:
  InputGlyphs(sf::Texture& text, GlyphContainer* curr_object);
  ~InputGlyphs();
  void discard();
  std::vector<GlyphID> getVectorGlyphID();
private:
  GlyphContainer* _current_object;
};

#endif
