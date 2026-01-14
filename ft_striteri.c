/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:19:36 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/14 20:32:25 by hutokgoz         ###   ########.fr       */
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

// void	help(unsigned int s, char *c)
// {
// 	if(s % 2 == 0)
// 	{
// 		if ('a' <= *c && *c <= 'z')
// 			*c -= 32;
// 	}
// }
// int main(){
// 	char k[] = "merhaba";
// 	ft_striteri(k, help);
// 	printf("%s", k);
// }