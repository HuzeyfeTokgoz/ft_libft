/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 13:43:35 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/06 14:01:48 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t src_len;

	src_len = ft_strlen(src);
	dst_len = 0;

	while (dst[dst_len] != '\0' && dst_len < size)
    	dst_len++;

	return (src_len + dst_len);	
}
