/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:48:42 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/13 19:52:11 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *s;
	int	k;
	int len;

	len  = 0;
	k = 0;
	s = 0;
	if (n < 0)
	{
		k = 1;
		n *= -1;
	}
	if (n == 0)
	{
		len = 0;
	}
	if (n > 9)
	{
		ft_itoa(n / 10);
	}
	if (n < 9)
	{
		word_add(n % 10);
	}
	
//	sayı = -206;	
	dest = (char *)malloc(sizeof(char) * (len + k));
}