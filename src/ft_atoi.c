/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:06:00 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/13 17:54:39 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Gets a number by a string and returns the number in a integer form
 * 			- It eliminates spaces at the beggining of the string
 * 
 * @param str 
 * @return int 
 */
int	ft_atoi(const char *str)
{
	int		sign;
	int		value;
	size_t	idx;

	sign = 1;
	value = 0;
	idx = 0;
	while ((str[idx] >= '\t' && str[idx] <= '\r') || str[idx] == ' ')
		idx++;
	if (str[idx] == '-')
	{
		idx++;
		sign = -1;
	}
	else if (str[idx] == '+')
	{
		idx++;
		sign = 1;
	}
	while (str[idx] >= '0' && str[idx] <= '9')
	{
		value = value * 10 + str[idx] - '0';
		idx++;
	}
	return (value *= sign);
}
