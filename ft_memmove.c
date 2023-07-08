/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:29:40 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/08 12:39:58 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (!dest || !src)
		return (dest);
	if (dest == src)
		return (dest);
	i = 0;
	if (((size_t)dest - (size_t)src) < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
		return (ft_memcpy(dest, src, len));
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[50];
// 	// char str2[50];

// 	strcpy(str, "Hello World");
// 	// strcpy(str2, "This is string.h library function");
// 	// puts(str);
// 	// puts(str2);

// 	printf("Ours: %s\n", ft_memmove(str, str + 2, 5));
// 	printf("The Original: %s\n", memmove(str, str + 2, 5));

// 	return (0);
// }