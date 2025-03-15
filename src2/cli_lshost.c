#include "cli.h"
#include "icoc.h"
#include <stdio.h>

void lshost_handler() {
    printf("Displaying cached hosts...\n");
    print_from_icoc(); // Print cache content
}
