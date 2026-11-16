// Implementation of the lock API; the declaration file carries the trace.
export function lockState(landed) {
  return landed ? "open" : "locked";
}
