/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:51:45 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/08 15:07:19 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, char *restrict src, size_t dest_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && j < (dest_size - 1))
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	while (j < (dest_size - 1))
	{
		dest[j] = '\0';
		j++;
	}
	dest[j] = '\0';
	return (j);
}
#include <stdio.h>
#include <string.h>

// int	main(void)
// {
// 	char str[50] = " World";
// 	char str2[12] = "Hello";

// 	printf("Ours: %lu\n", ft_strlcat(str2, str, 12));
// 	printf("String after: %s\n", str2);
// 	// printf("Original: %lu\n", strlcat(str2, str, 12));
// 	// printf("String after: %s\n", str2);

// 	return (0);
// }