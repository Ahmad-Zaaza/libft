/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/07/14 20:49:20 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2023/07/14 20:49:20 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	is_match(char delimeter, char c)
{
	return (c == delimeter);
}

static char	*create_string(char const *s, int start, int finish)
{
	int i;
	char *str;

	i = 0;
	str = (char *)malloc(finish - start + 1);
	if (!str)
	{
		free(str);
		return (NULL);
	}
	while (start < finish)
	{
		str[i] = s[start++];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	get_count(char const *s, char delimeter)
{
	int count;
	int i;
	int in;

	count = 0;
	i = 0;
	in = 0;

	while (s[i])
	{
		if (!is_match(delimeter, s[i]))
		{
			if (!in)
			{
				in = 1;
				count++;
			}
		}
		else
			in = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char **arr;
	int i;
	int j;
	int index;

	i = 0;
	j = 0;
	index = -1;
	arr = (char **)malloc((get_count(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (!is_match(c, s[i]) && index < 0)
			index = i;
		else if ((is_match(c, s[i]) || i == ft_strlen(s)) && index >= 0)
		{
			arr[j++] = create_string(s, index, i);
			index = -1;
		}
		i++;
	}
	arr[j] = NULL;
	return (arr);
}

// #include <stdio.h>

// int main()
// {

//     char *str = "hello!zzzzzzzz";
//     char **arr = ft_split(str, 'z');
//     for (size_t i = 0; arr[i]; i++)
//     {
//         printf("%s\n", arr[i]);
//     }
// }