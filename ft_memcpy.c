#include "libft.h"

void *ft_memcpy(void *dest, void *src, size_t n)
{
    int i;

    if (!dest || !src)
        return (0);
    i = 0;
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return dest;
}
