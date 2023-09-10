/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:11:17 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/10 14:10:30 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			idx;
	size_t			counter;

	counter = 1;
	idx = 0;
	if (n == 0)
		return (0);
	while (s1[idx] == s2[idx] && (s1[idx] != '\0' && s2[idx] != '\0')
		&& counter < n)
	{
		idx++;
		counter++;
	}
	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}
