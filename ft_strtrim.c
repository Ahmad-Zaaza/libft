/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:14:37 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/11 17:10:40 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	is_match(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	get_len(char const *s1, char const *set)
{
	int	i;
	int	len;
	int	is_last;

	i = 0;
	len = 0;
	is_last = 1;
	// while (s1[i])
	// {
	// 	if (!is_match(set, s1[i]))
	// 	{
	// 	}
	// }
	while (is_match(set, s1[i]))
		i++;
	while (s1[i] && !is_match(set, s1[i]))
	{
		i++;
		len++;
	}
	while (is_match(set, s1[i]))
		i++;
	is_last = 1;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	char *str;

	str = (char *)malloc(get_len(s1, set));
	if (!str)
		return (NULL);
}