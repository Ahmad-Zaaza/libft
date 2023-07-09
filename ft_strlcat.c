/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:51:45 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/09 22:07:44 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, char *restrict src, size_t dest_size)
{
	size_t	i;
	size_t	dest_len;
	size_t	total_len;

	i = 0;
	dest_len = ft_strlen(dest);
	if (!dest_size)
		return (ft_strlen(src));
	total_len = ft_strlen(src) + dest_len;
	while (src[i] && dest_len < (dest_size - 1))
	{
		dest[dest_len++] = src[i++];
	}
	while (dest_len < (dest_size - 1))
	{
		dest[dest_len] = '\0';
		dest_len++;
	}
	if (dest_len > (dest_size - 1))
		return (ft_strlen(src) + dest_size);
	dest[dest_len] = '\0';
	return (total_len);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	// char str[50] = " World";
// 	char str2[12] = "Hello";

// 	printf("Ours: %lu\n", ft_strlcat(str2, "", 12));
// 	printf("String after: %s\n", str2);
// 	// printf("Original: %lu\n", strlcat(str2, "", 12));
// 	// printf("String after: %s\n", str2);

// 	return (0);
// }