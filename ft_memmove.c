/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 21:55:20 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/07 22:59:12 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!dest && !src)
	{
		return (NULL);
	}
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d > s)
	{
		while (n--)
		{
			d[n] = s[n];
		}	
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
