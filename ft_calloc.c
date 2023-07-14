/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:38:37 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/14 21:12:17 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (size && (count) > __UINT16_MAX__ / size)
	{
		return (NULL);
	}
	mem = malloc(size * count);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size * count);
	return (mem);
}
