package flight

// Contains reports whether a point is inside the fence. Implements SWR-04 and SYS-007.
func Contains(x float64, y float64) bool {
	// SWR-05 inside the body: never traced.
	return x >= 0 && y >= 0
}
