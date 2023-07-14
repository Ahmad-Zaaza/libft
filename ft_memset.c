/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:27:10 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/15 01:34:19 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	if (!b)
		return (b);
	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[50];
// 	char str2[50];

// 	strcpy(str, "This is string.h library function");
// 	strcpy(str2, "This is string.h library function");
// 	puts(str);
// 	puts(str2);

// 	memset(str, '$', 50);
// 	ft_memset(str2, '$', 50);
// 	puts(str);
// 	puts(str2);

// 	return (0);
// }