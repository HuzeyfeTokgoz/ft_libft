/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:19:36 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/15 16:20:17 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
	{
		return ;
	}
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

static void deneme(unsigned int i, char *s)
{
	if (i % 2 == 0)
	{
		s[i] -= 32;
	}
}
int main(){
	char *s = "merhaba";
	ft_striteri(s, deneme);
	printf("%s", s);
}