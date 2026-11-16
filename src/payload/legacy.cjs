// Legacy release check kept for older ground stations. Implements SWR-03.
function legacyRelease(landed) {
  return landed;
}
module.exports = { legacyRelease };
