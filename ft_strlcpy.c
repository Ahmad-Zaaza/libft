/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:37:38 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/09 17:42:12 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t dest_size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (!dest_size)
		return (src_len);
	while (src[i] && i < (dest_size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
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