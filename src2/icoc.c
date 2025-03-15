#include "icoc.h"
#include <stdio.h>

static UTOD cache;

void add_to_icoc(UTOD *utod) {
    cache = *utod;
}

void print_from_icoc() {
    printf("Cached Host = %s, IP = %s\n", cache.host_name, cache.ip_address);
}
