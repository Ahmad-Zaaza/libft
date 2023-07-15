/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:02:14 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/15 15:27:28 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

// #include "stdio.h"

// int	main(void)
// {
// 	t_list	*list;

// 	list = ft_lstnew(strdup("ahmad"));
// 	printf("%s\n", (char *)list->content);
// 	list->next = NULL;
// 	ft_lstdelone(NULL, &free);
// 	printf("%s\n", (char *)list->content);
// 	return (0);
// }

// void	*del(void *content)
// {
// 	free(content);
// }