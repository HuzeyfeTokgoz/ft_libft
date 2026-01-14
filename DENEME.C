/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DENEME.C                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 22:38:10 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/14 22:45:51 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	size_t		i;

	p = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (char) c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
int main(void)
{
    char    str[] = "Gemini ile C programlama";
    char    target = 'i';
    char    *result;

    // 'void *' dönüş değerini 'char *' tipine cast ediyoruz
    result = (char *)ft_memchr(str, target, 15);
    
    if (result)
        printf("Bulundu: %s (Adres farki: %ld)\n", result, result - str);
    else
        printf("Karakter bulunamadi.\n");

    return (0);
}