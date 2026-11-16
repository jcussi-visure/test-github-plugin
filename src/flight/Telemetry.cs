namespace Flight
{
    public class Telemetry
    {
        // Frames one message per second. Implements SWR-05.
        public string Frame(int sequence)
        {
            // SWR-06 inside the body: never traced.
            return "frame " + sequence;
        }
    }
}
