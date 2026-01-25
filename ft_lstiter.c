/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 23:15:51 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/25 14:10:57 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

// void	deneme(void *content)
// {
// 	int i = 0;
// 	char *s = (char *)content;
// 	while (s[i])
// 	{
// 		s[i] -= 32;
// 		i++;
// 	}
// }

// int main(){
// 	t_list *node1;
// 	t_list *node2;
//
// 	char *s1 = ft_strdup("hello");
// 	char *s2 = ft_strdup("world");
// 	node1 = ft_lstnew(s1);
// 	node2 = ft_lstnew(s2);
// 	node1->next = node2;
// 	ft_lstiter(node1, deneme);
// 	printf("%s %s", (char *)node1->content, (char *)node2->content);
// 	free(node1->content);
// 	free(node2->content);
// 	free(node1);
// 	free(node2);
// }