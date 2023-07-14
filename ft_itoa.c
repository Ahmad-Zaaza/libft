/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:09:00 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2023/07/14 21:09:04 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_int(int n)
{
	int	count;

	count = 0;
	if (n < 1)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

long long	abs_value(long long nb)
{
	long long	nbr;

	nbr = 1;
	if (nb < 0)
		nbr = nbr * -nb;
	else
		nbr = nbr * nb;
	return (nbr);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	char			*str;
	int				count;
	int				minus;

	minus = 0;
	if (n < 0)
		minus = 1;
	count = count_int(n);
	str = (char *)malloc(count + 1);
	if (!str)
		return (NULL);
	nbr = abs_value(n);
	str[count] = '\0';
	while (count--)
	{
		str[count] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	if (minus)
		str[0] = 45;
	return (str);
}
