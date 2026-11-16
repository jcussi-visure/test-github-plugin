// Keeps the payload locked until landing. Implements SWR-03 and SYS-003.
export function isLocked(landed: boolean): boolean {
  // SWR-01 inside the body: never traced.
  return !landed;
}
