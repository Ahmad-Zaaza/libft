/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:21:22 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/08 15:26:01 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n)
	{
		if (((unsigned char *)s1) > ((unsigned char *)s2))
		{
			return (((unsigned char *)s1) - ((unsigned char *)s2));
		}
		else if (((unsigned char *)s1) < ((unsigned char *)s2))
		{
			return (((unsigned char *)s2) - ((unsigned char *)s1));
		}
		n--;
	}
	return (0);
}