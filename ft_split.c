/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:29:22 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/10 23:33:30 by hutokgoz         ###   ########.fr       */
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
int wordlen(char *str,char c)
{
	char *dest;
	int flag;
	int start;
	int end;
	int i;
	int k;

	i = 0;
	k = 0;
	flag = 1;
	start = 0;
	end = 0;
	while (str[i])
	{
		if (*str != c && flag)
		{
			start = i;
			flag = 0;
		}
		if (str + 1 == c && !flag)
		{
			end = i;
		}
		dest[k++] = (char *)malloc(end - start + 1);
		if (!dest)
		{
			free();
			k--;
		} 
		return(dest);
		i++;
	}
	return (0);
}
char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		count;
	int		i;
	int 	j;
	int k;
	int start;
	int end;
	k = 0;
	start = 0;
	end = 0;
	j = 0;
	i = 0;
	count = wordCount(s, c);
	dest = (char **)malloc(sizeof(char *) * count + 1);

}
#include <stdio.h>
int main()
{
	char str[] = "  hello   worldsadwsd  ";
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
}