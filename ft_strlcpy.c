/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonel <leonel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:23:52 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/24 20:40:28 by leonel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	long unsigned int	i;

	i = 0;
	if (siz == 0)
		return (ft_strlen(src));
	while ((i < siz - 1) && (i <= ft_strlen(src)))
	{
		dst[i] = src[i];
		i++;
	}
	dst[siz - 1] = '\0';
	return (ft_strlen(src));
}
