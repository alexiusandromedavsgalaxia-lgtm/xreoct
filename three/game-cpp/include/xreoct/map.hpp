#pragma once
#include "scene.hpp"
#include <string>
namespace xreoct {
class Map {
public:
  explicit Map(std::string name = "main");
  void build(Scene& scene);
  const std::string& name() const;
private:
  std::string name_;
};
}
