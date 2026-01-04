#ifndef YANC_IP_H
#define YANC_IP_H

#include "types.h"

/* we use numeric types for efficiency */
typedef struct
{
   u32 addr;
   u8 mask;
} ipv4_t;

/* index is zero-indexed */
u8 ipv4_get_octet(ipv4_t ip, u8 index);
u32 ip_to_hex(const char *ip);
void hex_to_ip(u32 ip_addr, char *buffer);

#endif /* YANC_IP_H */
