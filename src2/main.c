#include "cli.h"
#include "icoc.h"
#include <stdio.h>
#include <string.h>

void print_usage() {
    printf("Usage:\n");
    printf("  ./cli mkhost -name <host_name> -ip <ip_address>\n");
    printf("  ./cli lshost\n");
}

int main(int argc, char *argv[]) {
    // Initialize cache on program start
    init_cache();

    if (argc < 2) {
        print_usage();
        return -1;
    }

    if (strcmp(argv[1], "mkhost") == 0) {
        if (argc < 6) {
            printf("Error: Missing parameters\n");
            print_usage();
            return -1;
        }

        char *host_name = argv[3];
        char *ip_address = argv[5];
        mkhost_handler(host_name, ip_address);
    } 
    else if (strcmp(argv[1], "lshost") == 0) {
        lshost_handler();
    } 
    else {
        printf("Error: Unknown command '%s'\n", argv[1]);
        print_usage();
        return -1;
    }

    return 0;
}
