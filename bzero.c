#include "libft.h"

void bzero(void *s, size_t n)
{   
    unsigned char c = '\0';
    unsigned char *tmp = s;

    while (n > 0)
    {
        *tmp = c;
        tmp++;
        n--;
    }
}