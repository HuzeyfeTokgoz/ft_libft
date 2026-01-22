/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:27:10 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/16 17:09:15 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
		return(NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}

int main(){
	t_list *nn;

	nn = ft_lstnew("merhaba");
	printf("%s", (char *)nn->next);
	free(nn);
}