#pragma once
#include <string>
#include <vector>
namespace xreoct {
struct Dimensions { double width{}, height{}, depth{}; };
struct SceneObject { std::string name; Dimensions dimensions; };
class Scene {
public:
  void buildDefault();
  void addObject(SceneObject object);
  const std::vector<SceneObject>& objects() const;
private:
  std::vector<SceneObject> objects_;
};
}
