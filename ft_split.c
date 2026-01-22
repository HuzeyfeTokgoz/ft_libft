/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:29:22 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/22 22:07:15 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c)
{
	int	count;
	int	flag;

	flag = 0;
	count = 0;
	while (*str)
	{
		if (*str != c && (*str - 1 == c || str[0]) && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (count);
}

static int	word_len(const char *str, char c)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

static char	**free_all(char **dest, int i)
{
	while (i > 0)
		free(dest[--i]);
	free(dest);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		count;

	i = 0;
	if (!s)
		return (NULL);
	count = word_count(s, c);
	dest = (char **)malloc(sizeof(char *) * (count + 1));
	if (!dest)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		dest[i] = ft_substr(s, 0, word_len(s, c));
		if (!dest)
			return (free_all(dest, i));
		s += word_len(s, c);
		i++;
	}
	dest[i] = NULL;
	return (dest);
}

#include <stdio.h>
int main()
{
	char str[] = "  hello   worldsadwsd  a sss";
	char c = ' ';
	char **a = ft_split(str,c);
	int i = 0;
	//printf("%s",a);
	while (a[i])
	{
		printf("%s\n", a[i]);
		free(a[i]);
		i++;
	}
	free(a);
}