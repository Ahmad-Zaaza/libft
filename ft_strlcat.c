/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:51:45 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/06 15:59:25 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, char *restrict src, size_t dest_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = dest_size;
	while (src[i] && i < dest_size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (j);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[50] = " World";
	char str2[50] = "Hello";

	printf("Ours: %lu\n", ft_strlcat(str2, str, 10));
	printf("String after: %s\n", str2);
	printf("Original: %lu\n", strlcat(str2, str, 10));

	return (0);
}