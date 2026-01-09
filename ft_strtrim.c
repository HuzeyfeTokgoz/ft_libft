/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:49:12 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/09 18:33:08 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_setcheck(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*dest;
	size_t	end;
	size_t	start;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_setcheck(set, s1[start]))
		start++;
	while (end > start && ft_setcheck(set, s1[end - 1]))
		end--;
	dest = (char *)malloc(end - start + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (end > start)
		dest[i++] = s1[start++];
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char s1[] = "abahelloab";
	char c[] = "ab"; 
	char *a = ft_strtrim(s1, c);
	printf("%s", a);	
}
	*/
