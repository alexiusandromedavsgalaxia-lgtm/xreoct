#include "xreoct/scene.hpp"
#include <utility>
namespace xreoct {
void Scene::buildDefault() {
  objects_.clear();
  addObject({"three", {10.0, 3.0, 10.0}});
  addObject({"house", {12.0, 6.0, 12.0}});
  addObject({"area", {30.0, 1.0, 30.0}});
  addObject({"window", {2.0, 2.0, 0.3}});
  addObject({"door", {1.2, 2.2, 0.3}});
  addObject({"rock", {2.0, 1.5, 2.0}});
}
void Scene::addObject(SceneObject object) { objects_.push_back(std::move(object)); }
const std::vector<SceneObject>& Scene::objects() const { return objects_; }
}
