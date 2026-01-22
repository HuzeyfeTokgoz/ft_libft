/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 09:41:26 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/15 16:17:56 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				s_len;
	char			*dest;
	unsigned int	i;

	s_len = 0;
	i = 0;
	if (!s || !f)
		return (NULL);
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

static char deneme(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		c -= 32;
	}
	return(c);
}

int main(){
	char *s = "merhaba";
	char *d = ft_strmapi(s, deneme);
	printf("%s", d);
	printf("%s", s);
	free(d);
}