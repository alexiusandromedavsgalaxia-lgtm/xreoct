#pragma once
#include <string>
namespace xreoct {
struct GameConfig {
  std::string name{"Evil Light"};
  std::string version{"beta v0.5"};
  std::string language{"english"};
  int volume{100};
  int brightness{100};
};
}
