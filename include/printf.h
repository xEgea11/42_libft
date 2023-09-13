/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:06:34 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/13 18:16:27 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "libft.h"

int		ft_printf(char const *fmt, ...);
int		ft_putchar_fd_printf(char c, int fd);
int		ft_putstr_fd_printf(char *s, int fd);
int		ft_putnbr_fd_printf(int n, int fd);
int		ft_putunbr_fd_printf(unsigned int n, int fd);
size_t	ft_strlen_printf(const char *s);
int		to_hex_printf(unsigned int i);
int		to_hex_up_printf(unsigned int i);
int		ptrhx_printf(unsigned long int i);

#endif