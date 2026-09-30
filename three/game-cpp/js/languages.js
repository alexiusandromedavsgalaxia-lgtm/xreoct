export const languageZones = {
  german: ["DE", "PL", "CZ", "BE", "NL", "AT", "CH"],
  spanish: ["ES", "MX", "GT", "HN", "BZ", "SV", "PA", "CO", "EC", "VE", "BO", "PE", "CL", "AR", "PY", "UY"],
  english: ["GB-SCT", "GB-WLS", "IE", "US"]
};
export function languageForCountry(code) {
  for (const [language, countries] of Object.entries(languageZones)) {
    if (countries.includes(code)) return language;
  }
  return "english";
}
