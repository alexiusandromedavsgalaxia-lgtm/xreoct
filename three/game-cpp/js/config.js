export const gameConfig = {
  name: "Evil Light",
  version: "beta v0.5",
  language: "english",
  volume: 100,
  brightness: 100
};
export function setVolume(value) {
  gameConfig.volume = Math.max(0, Math.min(100, Number(value)));
}
export function setBrightness(value) {
  gameConfig.brightness = Math.max(0, Math.min(100, Number(value)));
}
