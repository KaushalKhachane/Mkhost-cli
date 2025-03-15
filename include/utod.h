#ifndef UTOD_H
#define UTOD_H

#define IC_TYPE_Host 1

typedef struct {
    char host_name[64];
    char ip_address[32];
} UTOD;

UTOD *allocate_utod(int type);

#endif
