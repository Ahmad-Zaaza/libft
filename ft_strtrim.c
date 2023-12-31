/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:11:22 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2023/07/20 12:13:47 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_match(char const *set, char c)
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

static int	get_len(char const *s1, char const *set, size_t *start, size_t *end)
{
	int	i;
	int	str_len;

	i = 0;
	str_len = ft_strlen(s1);
	while (i < str_len)
	{
		if (!is_match(set, s1[i]))
		{
			*start = i;
			break ;
		}
		i++;
	}
	while (s1[str_len - 1])
	{
		if (!is_match(set, s1[str_len - 1]))
		{
			*end = str_len;
			break ;
		}
		str_len--;
	}
	return (*end - *start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s1)
		return (NULL);
	start = 0;
	end = 0;
	i = 0;
	len = get_len(s1, set, &start, &end);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
