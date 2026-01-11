/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:49:12 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/11 20:36:36 by hutokgoz         ###   ########.fr       */
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

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_setcheck(set, s1[start]))
		start++;
	while (end > start && ft_setcheck(set, s1[end - 1]))
		end--;
	dest = ft_substr(s1, start, end - start);
	return (dest);
}

#include <stdio.h>
int main()
{
	char s1[] = "bahelloaba";
	char c[] = "ab"; 
	char *a = ft_strtrim(s1, c);
	printf("%s", a);	
}
	
