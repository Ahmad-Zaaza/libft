/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:48:43 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/14 21:09:57 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strdup(const char *s1)
{
	int		s1_len;
	int		i;
	char	*s2;

	s1_len = ft_strlen(s1);
	i = 0;
	s2 = (char *)malloc(s1_len + 1);
	if (!s2)
		return (0);
	while (i < s1_len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
