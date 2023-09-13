/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:09:33 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/13 17:58:35 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*str;
	size_t		size;

	size = 0;
	while (s1[size] != '\0')
		size++;
	str = malloc(size * sizeof(char) + 1);
	if (!str)
		return (0);
	size = 0;
	while (s1[size] != '\0')
	{
		str[size] = (char)s1[size];
		size++;
	}
	str[size] = '\0';
	return ((char *)str);
}
