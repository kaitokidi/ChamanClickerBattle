#ifndef __RECIPIES__
#define __RECIPIES__

#include "GlyphContainer.hpp"
#include "Recipe.hpp"

#include <map>

class Recipies : public GlyphContainer {
public:
  Recipies(const sf::Texture& text);
  ~Recipies();

  void populate();
  GlyphID build(std::vector<GlyphID>);
  void draw(sf::RenderTarget* target);

  GlyphID getGlyphIDByIndex(int index);

private:
  void generateSimpleRecipies();
  void generateComplexRecipe();

  GlyphID generateUniqueSimpleReagent();
  GlyphID generateUniqueComplexReagent();

  bool isUsed(GlyphID);

  std::map<std::vector<GlyphID>, GlyphID> recipies;
  std::vector<GlyphID> glyphs;

  int used_simple;
  GlyphID aused_simple[2];
};

#endif
