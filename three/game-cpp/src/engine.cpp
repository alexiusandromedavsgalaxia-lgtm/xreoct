#include "xreoct/engine.hpp"
#include <algorithm>
namespace xreoct {
Engine::Engine() : state_(GameState::Stopped), volume_(100), brightness_(100) {}
void Engine::boot() { state_ = GameState::Loading; loadAssets(); state_ = GameState::Ready; }
void Engine::loadAssets() {}
void Engine::setState(GameState state) { state_ = state; }
GameState Engine::state() const { return state_; }
void Engine::setVolume(int value) { volume_ = std::clamp(value, 0, 100); }
void Engine::setBrightness(int value) { brightness_ = std::clamp(value, 0, 100); }
int Engine::volume() const { return volume_; }
int Engine::brightness() const { return brightness_; }
}
