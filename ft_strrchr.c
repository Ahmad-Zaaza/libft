/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:41:31 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/09 22:19:53 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # APPROACH 1
char	*ft_strrchr(const char *str, int c)
{
	int	found;
	int	i;

	found = -1;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			found = i;
		i++;
	}
	if (found >= 0)
		return ((char *)(str + found));
	if ((char)c == str[i])
		return ((char *)(str + i));
	return (0);
}

// # APPROACH 2
// #include "libft.h"
// char	*ft_strrchr(const char *str, int c)
// {
// 	int	len;

// 	len = ft_strlen(str);
// 	while (str[len - 1])
// 	{
// 		if (str[len] == c)
// 		{
// 			return (char *)(str + len);
// 		}
// 		len--;
// 	}
// 	if (c == '\0')
// 		return (char *)(str + len);
// 	return (0);
// }

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[50];
// 	char str2[50];

// 	strcpy(str, "This is string.h library function");
// 	strcpy(str2, "This is string.h library function");
// 	puts(str);
// 	puts(str2);

// 	printf("Ours: %s\n", ft_strrchr(str, '\0'));
// 	printf("The Original: %s\n", strrchr(str, '\0'));

// 	return (0);
// }