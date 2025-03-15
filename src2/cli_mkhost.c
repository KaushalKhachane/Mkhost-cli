#include "cli.h"
#include "utod.h"
#include "utask.h"
#include "icoc.h"
#include <stdio.h>
#include <string.h>

void mkhost_handler(char *host_name, char *ip_address) {
    printf("Executing mkhost command...\n");

    // Allocate memory for UTOD object
    UTOD *utod = allocate_utod(IC_TYPE_Host);

    // Clear memory before writing
    memset(utod, 0, sizeof(UTOD));

    // Assign values to UTOD
    strcpy(utod->host_name, host_name);
    strcpy(utod->ip_address, ip_address);

    // Send UTASK to CSM
    if (send_utask_to_csm(utod) != 0) {
        printf("Failed to create host\n");
        return;
    }

    // Add to cache for quick access
    add_to_icoc(utod);

    printf("Host created successfully\n");
}
