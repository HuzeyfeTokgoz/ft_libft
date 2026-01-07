/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 22:30:07 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/07 22:51:44 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			i;

	i = 0;
	ch = (unsigned char)c;
	str = (unsigned char *)s;
	while (n > i)
	{
		if (str[i] == ch)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
#include <stdio.h>
int main(){
	char *s = "12s\0s345";
	int c = 's';
	char *d = ft_memchr(s,c,5);
	printf("%s", d);
}