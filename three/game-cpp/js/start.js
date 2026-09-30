import { gameConfig, setBrightness, setVolume } from "./config.js";
import { languageForCountry } from "./languages.js";
import { loadGameAssets } from "./loading.js";

export function openConfig() {
  return { volume: gameConfig.volume, brightness: gameConfig.brightness };
}
export function applyConfig({ volume, brightness }) {
  setVolume(volume);
  setBrightness(brightness);
  return openConfig();
}
export async function startGame(country = "US") {
  gameConfig.language = languageForCountry(country);
  const loading = await loadGameAssets();
  return {
    game: gameConfig.name,
    version: gameConfig.version,
    language: gameConfig.language,
    state: loading.state
  };
}
