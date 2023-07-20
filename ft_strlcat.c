/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:51:45 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/20 12:26:58 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t dest_size)
{
	size_t	i;
	size_t	dest_len;

	dest_len = ft_strlen(dest);
	if (dest_size <= dest_len)
		return (ft_strlen(src) + dest_size);
	i = 0;
	while (src[i] && dest_len < (dest_size - 1))
	{
		dest[dest_len++] = src[i++];
	}
	dest[dest_len] = '\0';
	return (dest_len + ft_strlen(&src[i]));
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[50] = "Hello my name is ahmad";
// 	char str2[10];

// 	printf("Ours: %lu\n", ft_strlcpy(str2, str, 10));
// 	printf("String after: %s\n", str2);
// 	printf("Original: %lu\n", strlcpy(str2, str, 10));

// 	return (0);
// }