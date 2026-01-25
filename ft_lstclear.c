/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 22:19:02 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/25 14:11:19 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next;

	if (lst && del)
	{
		tmp = *lst;
		while (tmp)
		{	
			next = tmp->next;
			del(tmp->content);
			free(tmp);
			tmp = next;
		}
	}
	*lst = NULL;
}

// void lstdel(void *content)
// {
// 	free(content);
// }

// int main(){
// 	char *s1 = ft_strdup("hello");
// 	char *s2 = ft_strdup("world");

// 	t_list *node1 = ft_lstnew(s1); 
// 	t_list *node2 = ft_lstnew(s2);
// 	node1->next = node2;
//
// 	t_list *lst = node1;
// 	printf("%s\n%s", (char *)node1->content, (char *)node2->content);
// 	ft_lstclear(&lst, lstdel);
// }