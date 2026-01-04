#include <stdio.h>
#include <stdlib.h>

#include "ip.h"

i32 main(void)
{
   ipv4_t laptop_ip = {.addr = ip_to_hex("192.168.1.100"), .mask = 24};

   char *s = malloc(sizeof(char) * 16);
   
   hex_to_ip(laptop_ip.addr, s);
   printf("%s", s);

   free(s);

   return 0;
}
