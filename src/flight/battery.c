#include "battery.h"

/* Implementation of the sampler declared in battery.h. */
int battery_sample(int cells) {
    /* SWR-06 inside the body: never traced. */
    return cells > 0 ? cells : 0;
}
