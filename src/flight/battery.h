/* Battery driver interface. */
#ifndef BATTERY_H
#define BATTERY_H

/* Samples every cell of the pack.
 * Implements SWR-01. */
int battery_sample(int cells);

#endif
