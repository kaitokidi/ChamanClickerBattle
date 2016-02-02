#ifndef __BASICREAGENTS__
#define __BASICREAGENTS__

#include "Glyph.hpp"
#include <utility>

const int NUM_BASIC_REAGENTS = 9;

class BasicReagents {
public:
  static void startNewSequence();
  static std::pair<GlyphID, std::vector<GlyphID>> getBasicReagent();
  static void init();
private:
  static GlyphID basic[NUM_BASIC_REAGENTS];
  static GlyphID used_g[NUM_BASIC_REAGENTS];
  static std::vector<std::vector<GlyphID>> reagents;
  static int used;

  static bool alreadyUsed(GlyphID);
};

#endif
