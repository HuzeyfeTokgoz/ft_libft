/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 00:21:55 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/25 01:18:07 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*newlst;
	char	*str;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		str = f(lst->content);
		new = ft_lstnew(str);
		if (!new)
		{
			ft_lstclear(&newlst, del);
			del(str);
			return (NULL);
		}
		ft_lstadd_back(&newlst, new);
		lst = lst->next;
	}
	return (newlst);
}

// void	*fonksiyon(void *content)
// {
// 	int i = 0;
// 	char *s = ft_strdup((char *)content);
// 	while (s[i])
// 	{
// 		s[i] -= 32;
// 		i++;
// 	}
// 	return (s);
// }

// void	del(void *content)
// {
// 	free(content);
// }

// int main(){
// 	char *s1 = ft_strdup("hello");
// 	char *s2 = ft_strdup("world");
// 	t_list *node1 = ft_lstnew(s1);
// 	t_list *node2 = ft_lstnew(s2);
// 	node1->next = node2;
// 	t_list *s = ft_lstmap(node1, fonksiyon, del);
// 	t_list *map = s;
// 	while (map)
// 	{
// 		printf("%s", (char *)map->content);
// 		map = map->next;
// 	}
// 	ft_lstclear(&s, del);
// 	ft_lstclear(&node1, del);
// }