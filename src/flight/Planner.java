package flight;

public class Planner {
    // Keeps every waypoint inside the geofence. Implements SWR-04.
    public boolean inside(double lat, double lon) {
        // SWR-05 inside the body: never traced.
        String note = "SWR-06 in a string: never traced";
        return lat > 0 && lon > 0 && !note.isEmpty();
    }
}
