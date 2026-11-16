// Encodes one telemetry frame. Implements SWR-05.
pub fn encode(sequence: u32) -> String {
    // SWR-02 inside the body: never traced.
    format!("frame {}", sequence)
}
