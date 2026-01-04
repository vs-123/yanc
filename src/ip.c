#include "ip.h"

#include <assert.h>
#include <stdio.h>

#include "util.h"

u8 ipv4_get_octet(ipv4_t ip, u8 index)
{
   assert(index <= 3);
   return (ip.addr >> (8 * (3 - index))) & 0xFF;
}

u32 ip_to_hex(const char *ip)
{
   u8 x, y, z, a;
   xsrt(
      (sscanf(ip, "%hhu.%hhu.%hhu.%hhu", &x, &y, &z, &a) == 4),
      "invalid IPv4 format"
   );
   /* huhuhuhuhuhu */

   return (x << 24) | (y << 16) | (z << 8) | a;
}

void hex_to_ip(u32 ip_addr, char *buffer)
{
   sprintf(
      buffer,
      "%u.%u.%u.%u",
      (ip_addr >> 24) & 0xFF,
      (ip_addr >> 16) & 0xFF,
      (ip_addr >> 8) & 0xFF,
      (ip_addr) & 0xFF
   );
}
