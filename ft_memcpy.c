/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 21:21:45 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/22 22:44:20 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*k;
	unsigned char	*l;

	if (!src || !dest)
		return (NULL);
	i = 0;
	k = (unsigned char *)src;
	l = (unsigned char *)dest;
	while (n > i)
	{
		l[i] = k[i];
		i++;
	}
	return (dest);
}
