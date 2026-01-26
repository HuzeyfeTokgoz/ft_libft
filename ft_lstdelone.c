/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 21:36:55 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/26 21:12:41 by hutokgoz         ###   ########.fr       */
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

void dellst(void *content)
{
	free(content);
}

// int main()
// {
// 	char *s = ft_strdup("hello");
// 	t_list *lst = ft_lstnew(s);
// 	printf("%s", (char *)lst->content);
// 	ft_lstdelone(lst, dellst);
// }