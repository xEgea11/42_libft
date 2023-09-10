/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:06:26 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/10 09:14:38 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief This function returns true if the character is alfanumeric
 * 
 * @param c 
 * @return int 
 */
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == TRUE)
		return (TRUE);
	if (ft_isdigit(c) == TRUE)
		return (TRUE);
	return (FALSE);
}
