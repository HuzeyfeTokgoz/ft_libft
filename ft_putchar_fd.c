/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:37:19 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/22 22:09:58 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(){
// 	int dosyanum = open("read.txt", O_RDWR | O_CREAT, 0777);
// 	ft_putchar_fd('k', dosyanum);
// 	close(dosyanum);
// }