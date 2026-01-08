/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 23:13:20 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/08 12:23:35 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	toplam;

	toplam = nmemb * size;
	str = malloc(toplam);
	if (str != '\0')
	{
		ft_memset(str, 0, toplam);
	}
	return (str);
}
