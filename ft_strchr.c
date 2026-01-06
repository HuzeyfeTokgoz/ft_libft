/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:51:57 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/06 13:02:07 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	k;

	k = c + 48;
	while (*s != '\0')
	{
		if (*s == k)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == k)
	{
		return ((char *)s);
	}
	return (NULL);
}
