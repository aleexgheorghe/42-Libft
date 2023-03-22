/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 09:09:50 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/22 09:35:01 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//int	main(void)
//{
//	int		fd;
//	char	buf[100];
//	char	*str;
//
//	str = "Hello World!";
//	fd = open("test.txt", O_RDONLY);
//	read(fd, buf, 100);
//	printf("%s", buf);
//	close(fd);
//	return (0);
//}
//
