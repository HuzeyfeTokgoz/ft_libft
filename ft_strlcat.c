/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 13:43:35 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/10 23:32:22 by hutokgoz         ###   ########.fr       */
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

    // 1. dst uzunluğunu bulurken size sınırını aşmadığından emin ol
    while (dst[dst_len] != '\0' && dst_len < size)
    {
        dst_len++;
    }

    // Eğer dst_len size'a eşitse, dst içinde null yok demektir.
    // Sadece toplam uzunluğu döndür, kopyalama yapma.
    if (dst_len == size)
        return (size + src_len);

    // 2. Kopyalama işlemi (i, src'nin indeksi; dst_len + i ise hedefteki konum)
    i = 0;
    while (src[i] != '\0' && (dst_len + i + 1) < size)
    {
        dst[dst_len + i] = src[i];
        i++;
    }

    // 3. Her zaman null karakteri ekle (Eğer yer varsa)
    if (dst_len < size)
        dst[dst_len + i] = '\0';

    return (dst_len + src_len);
}

int main()
{
	
	char *dest[11] = huzey;
	char *src = sude;
}