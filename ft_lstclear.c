/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:31:15 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/15 17:13:50 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (*lst && del)
	{
		tmp = *lst;
		while (*lst)
		{
			tmp = *lst;
			*lst = (*lst)->next;
			del(tmp->content);
			free(tmp);
		}
		lst = NULL;
	}
}

// #include "stdio.h"

// int	main(void)
// {
// 	t_list *l = ft_lstnew(strdup("nyancat"));

// 	l->next = ft_lstnew(strdup("#TEST#"));
// 	ft_lstclear(&l, &ft_lstdelone);
// 	write(2, "", 1);
// 	printf();
// 	return (0);
// }