#include "utod.h"
#include <stdlib.h>
#include <string.h>

UTOD *allocate_utod(int type) {
    UTOD *utod = (UTOD *)malloc(sizeof(UTOD));
    memset(utod, 0, sizeof(UTOD));
    return utod;
}
