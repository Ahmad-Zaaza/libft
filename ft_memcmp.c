/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:21:22 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/09 17:23:09 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((((unsigned char *)s1)[i] || ((unsigned char *)s2)[i]) && i < n)
	{
		if ((((unsigned char *)s1)[i]) > (((unsigned char *)s2)[i]))
			return (1);
		else if ((((unsigned char *)s1)[i]) < (((unsigned char *)s2)[i]))
			return (-1);
		i++;
	}
	return (0);
}
