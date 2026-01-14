/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 13:43:35 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/14 11:36:02 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  dst_len;
    size_t  src_len;
    size_t  i;

    src_len = ft_strlen(src);
    dst_len = 0;
    while (dst[dst_len] != '\0' && dst_len < size)
        dst_len++;
    if (dst_len == size)
        return (size + src_len);
    i = 0;
    while (src[i] != '\0' && (dst_len + i + 1) < size)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    if (dst_len < size)
        dst[dst_len + i] = '\0';

    return (dst_len + src_len);
}

// int main()
// {
	
// 	char *dest[11] = "huzey";
// 	char *src = "fe";
// }