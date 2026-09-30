#pragma once
#include <string>
namespace xreoct {
struct Hitbox { double width{}, height{}, depth{}; };
class Character {
public:
  explicit Character(std::string name = "Player");
  void createHitbox(double width, double height, double depth);
  void grabObject(const std::string& objectName);
  const std::string& name() const;
  const Hitbox& hitbox() const;
  const std::string& grabbedObject() const;
private:
  std::string name_;
  Hitbox hitbox_;
  std::string grabbedObject_;
};
}
