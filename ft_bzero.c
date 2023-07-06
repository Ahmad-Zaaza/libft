/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:11:01 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/06 10:23:02 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
	// while (n--)
	// {
	// 	*(unsigned char *)s++ = '\0';
	// }
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

// 	bzero(str + 4, 4);
// 	ft_bzero(str2 + 4, 4);
// 	puts(str);
// 	puts(str2);
// 	return (0);
// }