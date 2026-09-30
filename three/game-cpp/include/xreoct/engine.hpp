#pragma once
namespace xreoct {
enum class GameState { Loading, Ready, Running, Stopped };
class Engine {
public:
  Engine();
  void boot();
  void loadAssets();
  void setState(GameState state);
  GameState state() const;
  void setVolume(int value);
  void setBrightness(int value);
  int volume() const;
  int brightness() const;
private:
  GameState state_;
  int volume_;
  int brightness_;
};
}
