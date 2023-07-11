/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:15:59 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/11 16:40:23 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long int	result;
	int			i;
	int			sign;

	result = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45)
	{
		sign = -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result * 10 > 2147483647)
		{
			if (sign > 0)
				return (-1);
			else if (sign < 0)
				return (0);
		}
		else
		{
			result = (result * 10) + (str[i] - 48);
			i++;
		}
	}
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *str = "       +429496729542949672954294967295";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}