/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 02:07:05 by agungor           #+#    #+#             */
/*   Updated: 2023/10/16 13:17:02 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fcntl.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	ch;
	int		file_descriptor;

	ch = 'A';
	file_descriptor = open("yazdir.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (file_descriptor == -1)
	{
		perror("Dosya Açma hatası");
		exit(1);
	}
	ft_putchar_fd(ch, file_descriptor);
	close(file_descriptor);
}
