/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:51:45 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/20 12:31:32 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t dest_size)
{
	size_t	i;
	size_t	dest_len;

	if (dest_size == 0)
		return (ft_strlen(src));
	dest_len = ft_strlen(dest);
	if (dest_size <= dest_len)
		return (ft_strlen(src) + dest_size);
	i = 0;
	while (src[i] && dest_len < (dest_size - 1))
	{
		dest[dest_len++] = src[i++];
	}
	dest[dest_len] = '\0';
	return (dest_len + ft_strlen(&src[i]));
}
