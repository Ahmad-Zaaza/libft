/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:28:02 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/06 09:40:14 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	if (c == '\0')
		return (str + i);
	return (0);
}

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

// 	printf("Ours: %s\n", ft_strchr(str, 'z'));
// 	printf("The Original: %s\n", strchr(str, 'z'));

// 	return (0);
// }