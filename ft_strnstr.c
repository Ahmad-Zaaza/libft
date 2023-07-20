/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:11:05 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2023/07/20 11:54:19 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	j = 0;
	needle_len = ft_strlen(needle);
	if (!needle_len || !len)
		return ((char *)(haystack));
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && needle[j] == haystack[i + j] && (i + j) < len)
			j++;
		if (needle_len == j)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	ft_strnstr(((void *)0), "fake", 0);
// 	return (0);
// }