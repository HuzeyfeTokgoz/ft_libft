/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 17:43:26 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/25 14:12:25 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{	
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*tmp;

// 	head = NULL;
// 	ft_lstadd_front(&head, ft_lstnew("hello"));
// 	tmp = head;

// 	while (tmp)
// 	{
// 		printf("%s", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	printf("%s", "nul");
// 	ft_lstadd_front(&head, ft_lstnew("dünya"));
//
// 	tmp = head;

// 	while (tmp)
// 	{
// 		printf("%s", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// }