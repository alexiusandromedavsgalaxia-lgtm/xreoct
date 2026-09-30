#include "xreoct/character.hpp"
#include "xreoct/engine.hpp"
#include "xreoct/map.hpp"
#include "xreoct/scene.hpp"
#include <iostream>
int main() {
  xreoct::Engine engine;
  engine.boot();
  xreoct::Scene scene;
  xreoct::Map map("main");
  map.build(scene);
  xreoct::Character player("Player");
  player.createHitbox(0.8, 1.8, 0.8);
  engine.setState(xreoct::GameState::Running);
  std::cout << "Xreoct " << map.name() << " scene ready with "
            << scene.objects().size() << " objects.\n";
  return 0;
}
