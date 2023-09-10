/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:06:12 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/10 09:09:01 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief It allocates memory of "count" * "size" bytes, filled with zerosw
 * 
 * @param count 
 * @param size 
 * @return void* 
 */
void	*ft_calloc(size_t count, size_t size)
{
	size_t	space;
	void	*ptr;

	space = count * size;
	ptr = malloc(space);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, space);
	return (ptr);
}
