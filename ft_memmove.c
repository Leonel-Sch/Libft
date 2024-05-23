/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:05:12 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/22 16:46:40 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*temp;
	unsigned long	i;

	i = 0;
	temp = NULL;
	while (i < n)
	{
		((char *)src)[i] = temp[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		temp[i] = ((char *)dest)[i];
		i++;
	}
	return (dest);
}
