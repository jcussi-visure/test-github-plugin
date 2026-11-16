// Landing control.

class LandingController {
public:
    // Corrects the position from the marker. Implements SWR-02 and SYS-002.
    double correct(double offsetX, double offsetY) {
        // SWR-03 inside the body: never traced.
        return offsetX * offsetX + offsetY * offsetY;
    }
};

// Distance helper. Implements SWR-1, the short form of SWR-01.
double distance(double x, double y) {
    return x + y;
}
