/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:33:30 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/17 18:43:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
  t_list *tmp;
  t_list *new_list;
  t_list *new_node;

  if (!lst)
    return (NULL);
  tmp = lst;
  new_list = ft_lstnew(f(tmp->content));
  if (!new_list) {
    ft_lstclear(&new_list, del);
    ft_lstclear(&lst, del);
    return (NULL);
  }
  tmp = tmp->next;
  while (tmp) {
    new_node = ft_lstnew(f(tmp->content));
    if (!new_node) {
      ft_lstclear(&new_list, del);
      ft_lstclear(&lst, del);
      return (NULL);
    }
    ft_lstadd_back(&new_list, new_node);
    new_node->next = NULL;
    tmp = tmp->next;
  }
  return new_list;
}
