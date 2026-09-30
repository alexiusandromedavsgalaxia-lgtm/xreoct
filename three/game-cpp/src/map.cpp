#include "xreoct/map.hpp"
#include <utility>
namespace xreoct {
Map::Map(std::string name) : name_(std::move(name)) {}
void Map::build(Scene& scene) { scene.buildDefault(); }
const std::string& Map::name() const { return name_; }
}
