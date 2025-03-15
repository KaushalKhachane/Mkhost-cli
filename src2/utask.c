#include "utask.h"
#include <stdio.h>

int send_utask_to_csm(UTOD *utod) {
    printf("Sending data to CSM: Host = %s, IP = %s\n",
           utod->host_name, utod->ip_address);
    return 0; // Return 0 for success
}
