/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:05:25 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/09 22:40:56 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)s)[i] && i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)((unsigned char *)s) + i);
		i++;
	}
	if (((unsigned char *)s)[i] == (unsigned char)c && i < n)
		return (((void *)(unsigned char *)s) + i);
	return (NULL);
}
