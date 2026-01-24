/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:27:10 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/24 22:18:19 by hutokgoz         ###   ########.fr       */
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
