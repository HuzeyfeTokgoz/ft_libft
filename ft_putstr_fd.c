/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutokgoz <hutokgoz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:06:26 by hutokgoz          #+#    #+#             */
/*   Updated: 2026/01/14 23:55:56 by hutokgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

int main()
{
	int nb;
	nb = open("text.txt", O_RDWR | O_CREAT, 0777);
	open("aa.txt", O_WRONLY | O_CREAT , 0777);
	ft_putstr_fd("alki", 3);
	close(nb);
}