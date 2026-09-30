import { applyConfig, openConfig, startGame } from "./start.js";

export function mainScreen() {
  return {
    title: "Evil Light",
    version: "beta v0.5",
    buttons: ["PLAY", "CONFIGURATION"]
  };
}

export function configurationScreen() {
  const config = openConfig();
  return {
    title: "CONFIGURATION",
    controls: {
      volume: { value: config.volume, min: 0, max: 100 },
      brightness: { value: config.brightness, min: 0, max: 100 }
    },
    close: true
  };
}

export function updateConfiguration(volume, brightness) {
  return applyConfig({ volume, brightness });
}

export async function play(country = "US") {
  return startGame(country);
}
