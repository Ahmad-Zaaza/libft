/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:41:31 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/20 12:27:11 by azaaza           ###   ########.fr       */
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
