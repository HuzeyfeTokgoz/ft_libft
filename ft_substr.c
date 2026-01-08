/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:59:21 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/08 15:49:42 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;
	size_t	s_len;

	if (!s)
	{
		return (NULL);
	}
	s_len = ft_strlen(s);
	if ((size_t)start >= s_len)
	{
		return(ft_strdup(""));
	}
	if (len > s_len - (size_t)start)
	{
		len = s_len - (size_t)start;
	}
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (!d)
	{
		return (NULL);
	}
	i = 0;
	while (len > i)
	{
		d[i] = s[(size_t)start + i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

#include <stdio.h>
int main(){
	char *s = "huzeyfe";
	char *k = ft_substr(s,2,4);
	printf("%s", k);
}