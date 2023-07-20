/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:20:43 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/20 10:53:49 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word_count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word_count);
}

static int	ft_wordsize(char const *str, char c, int i)
{
	int	size;

	size = 0;
	while (str[i] != c && str[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**arr;
	int		size;
	int		j;

	i = 0;
	j = -1;
	arr = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (++j < ft_count_word(s, c))
	{
		while (s[i] == c)
			i++;
		size = ft_wordsize(s, c, i);
		arr[j] = ft_substr(s, i, size);
		if (!arr[j])
		{
			ft_free(arr, j);
			return (NULL);
		}
		i += size;
	}
	arr[j] = NULL;
	return (arr);
}
