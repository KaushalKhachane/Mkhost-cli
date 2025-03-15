#include "icoc.h"
#include <stdio.h>
#include <string.h>

static UTOD cache;

void init_cache() {
    memset(&cache, 0, sizeof(UTOD));
    
    // Load from file if available
    FILE *file = fopen("cache.dat", "rb");
    if (file) {
        fread(&cache, sizeof(UTOD), 1, file);
        fclose(file);
    }
}

void add_to_icoc(UTOD *utod) {
    cache = *utod;

    // Write to file for persistence
    FILE *file = fopen("cache.dat", "wb");
    if (file) {
        fwrite(&cache, sizeof(UTOD), 1, file);
        fclose(file);
    }
}

void print_from_icoc() {
    if (strlen(cache.host_name) == 0) {
        printf("No cached hosts found.\n");
        return;
    }
    
    printf("Host = %s, IP = %s\n", cache.host_name, cache.ip_address);
}
