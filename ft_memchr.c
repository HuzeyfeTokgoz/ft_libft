/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 22:30:07 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/14 11:42:09 by hutokgoz         ###   ########.fr       */
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
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(){
// 	char *s = "12ss345";
// 	int c = 's';
// 	char *d = ft_memchr(s,c,5);
// 	printf("%s", d);
// }