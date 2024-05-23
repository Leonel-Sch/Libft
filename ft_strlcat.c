/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:48 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/22 20:47:59 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <bsd/string.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t i;
	size_t lendst;

	i = 0;
	lendst = ft_strlen(dst);
	if (lendst >= siz)
	{
		return (strlen(src) + siz);
	}
	while ((lendst + i + 1 < siz) && src[i])
	{
		dst[lendst + i + 1] = src[i];
		i++;
	}
	while (lendst + i + 1 <= siz)
	{
		dst[lendst + i + 1] = '\0';
		i++;
	}
	return (strlen(src) + lendst);
}

//int main (void)
//{
//	char dst[] = "destination";
//	char src[] = "source";
//	size_t siz = 6;
//	printf("%zu ou %zu", ft_strlcat(dst, src, siz), strlcat(dst, src, siz));
//	return (0);
//}