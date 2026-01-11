/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:29:22 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/11 21:47:26 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordCount(const char *str, char c)
{
	int i;
	int count;
	int flag;

	flag = 0;
	count = 0;
	i = 0;
	while (*str)
	{
		if (*str != c && (*str - 1 == c || str[0]) && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if(*str == c)
		{
			flag = 0;
		}
		str++;
	}
	return (count);
}
static int	wordlen(const char *str,char c)
{
	int len;
	
	len = 0;
	while (str[len] && str[len] != c)
	{
		len++;
	}
	return (len);
}
static char *wordadd (char *s,char c)
{
	int		i;
	int 	word_len;
	
	i = 0;
	word_len = wordlen(s, c);
	while (*s == c && *s != '\0')
		s++;
	if (*s != c)
	{
		*s = ft_substr(s, 0, word_len);
		if (!s[i])
			ft_bzero(s[i], word_len);
	}
	return (s);
}
char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		count;
	int i;
	
	i = 0;
	count = wordCount(s, c);
	dest = (char **)malloc(sizeof(char *) * count + 1);
	if (!dest)
		return (NULL);
	while (*s)
	{
		wordadd(dest[i], c); 
		s += wordlen(s, c);
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
#include <stdio.h>
int main()
{
	char str[] = "  hello   worldsadwsd  ";
	char c = ' ';
	char *a = ft_split(str,c);
	int i = 0;
	//printf("%s",a);
	while (a[i])
			{
				printf("%s\n", a[i]);
				free(a[i]);
				i++;
			}
}