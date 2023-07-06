/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:37:38 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/06 14:49:47 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dest, char *restrict src, size_t dest_size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < dest_size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
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