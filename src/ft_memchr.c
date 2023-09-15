#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    void *adr;

    adr = (void *) s;
    while (n > 0)
    {
        if (*(int *)adr == c)
            return adr;
        adr ++;
        n --;
    }
    return ((void *) 0);
}
