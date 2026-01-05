/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huzeyfe <huzeyfe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 00:43:23 by huzeyfe           #+#    #+#             */
/*   Updated: 2026/01/06 01:13:47 by huzeyfe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	k;

	k = (char)c;
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
