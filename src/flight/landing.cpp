// Landing control.

class LandingController {
public:
    // Corrects the position from the marker. Implements SWR-02 and SYS-002.
    double correct(double offsetX, double offsetY) {
        // SWR-03 inside the body: never traced.
        return offsetX * offsetX + offsetY * offsetY;
    }
};
