/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 09:41:26 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/14 11:39:19 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	int		s_len;
	char	*dest;
	unsigned	i;

	s_len = 0;
	i = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	s_len = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// char	deneme(unsigned int s, char c)
// {
// 	if(s % 2 == 0)
// 	{
// 		if ('a' <= c && c <= 'z')
// 			return(c - 32);
// 	}
// 	return (c);
// }
// int main(){
// 	char *k = "merhaba";
// 	char *d = ft_strmapi(k, deneme);
// 	printf("%s", d);
// 	free(d);
// }