#include "cli.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 4) {
        printf("Usage: %s mkhost -name <host_name> -ip <ip_address>\n", argv[0]);
        return -1;
    }

    if (strcmp(argv[1], "mkhost") == 0) {
        char *host_name = NULL;
        char *ip_address = NULL;

        for (int i = 2; i < argc; i++) {
            if (strcmp(argv[i], "-name") == 0 && i + 1 < argc) {
                host_name = argv[i + 1];
                i++;
            } else if (strcmp(argv[i], "-ip") == 0 && i + 1 < argc) {
                ip_address = argv[i + 1];
                i++;
            }
        }

        if (host_name != NULL && ip_address != NULL) {
            mkhost_handler(host_name, ip_address);
        } else {
            printf("Invalid parameters for mkhost\n");
            return -1;
        }
    } else {
        printf("Invalid command\n");
        return -1;
    }

    return 0;
}
