/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:15:59 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/14 21:11:56 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long int	result;
	int			i;
	int			sign;
	int			count;

	result = 0;
	i = 0;
	sign = 1;
	count = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i++] == 45)
		sign = -1;
	else if (str[i] == 43)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (count++ == 19)
		{
			if (sign > 0)
				return (-1);
			else if (sign < 0)
				return (0);
		}
		else
			result = (result * 10) + (str[i++] - 48);
	}
	return (result * sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char *str = "92233720368547758070";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// }