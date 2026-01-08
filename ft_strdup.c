/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:30:22 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/08 14:56:24 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	size;
	size_t	i;
	
	i = 0;
	size = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if(!dest)
	{
		return (NULL);
	}
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest = '\0';
	return (dest);
}
