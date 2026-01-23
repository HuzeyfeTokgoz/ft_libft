/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 12:10:22 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/23 15:28:00 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void deneme(unsigned int i, char *c)
{
	if (i % 2 == 0)
		c -= 32;
}

int main(){
	char a[] = "merhaba";
	int b[] = {1,2,3};

	// ft_toupper('a');
	// ft_tolower('A');
	// ft_isdigit(1);
	// ft_isascii(97);
	// ft_isalpha('A');
	// ft_strlen(a);
	// ft_substr(a, 0, sizeof(a));
	// ft_strtrim(a, b);
	// ft_strchr(a, 'm');
	// ft_strrchr(a, 'm');
	// ft_strnstr(a, b, 4);
	// ft_strncmp(a, b, 5);
	// //ft_strmapi(a, deneme);
	// ft_striteri(b, deneme);
	// ft_strjoin(a, b);
	char *s = ft_memcpy(a, b, 4);
	printf("%s", s);
}