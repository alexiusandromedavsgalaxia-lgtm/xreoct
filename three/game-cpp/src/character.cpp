#include "xreoct/character.hpp"
#include <utility>
namespace xreoct {
Character::Character(std::string name) : name_(std::move(name)) {}
void Character::createHitbox(double width, double height, double depth) { hitbox_ = {width, height, depth}; }
void Character::grabObject(const std::string& objectName) { grabbedObject_ = objectName; }
const std::string& Character::name() const { return name_; }
const Hitbox& Character::hitbox() const { return hitbox_; }
const std::string& Character::grabbedObject() const { return grabbedObject_; }
}
