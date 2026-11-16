package flight

// Stops the motors when the main loop stalls. Implements SWR-06.
fun watchdog(stalledMs: Int): Boolean {
    // SWR-01 inside the body: never traced.
    return stalledMs >= 200
}
