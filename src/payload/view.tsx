// Shows the lock state. Implements SWR-03.
export function LockView(props: { locked: boolean }) {
  // SWR-04 inside the body: never traced.
  return <span>{props.locked ? "locked" : "open"}</span>;
}
