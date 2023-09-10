/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:22:10 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/10 10:34:35 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	idx;

	idx = 0;
	while (s[idx] != '\0')
		ft_putchar_fd(s[idx++], fd);
	write(fd, "\n", 1);
}
