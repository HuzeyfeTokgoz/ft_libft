/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 22:30:07 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/23 14:53:36 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	size_t			i;

	i = 0;
	chr = (unsigned char)c;
	str = (unsigned char *)s;
	while (n > i)
	{
		if (str[i] == chr)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
