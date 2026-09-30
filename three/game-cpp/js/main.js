import { startGame } from "./start.js";
const result = await startGame("US");
console.log("[Xreoct] " + result.game + " " + result.version + " | " + result.language + " | " + result.state);
