/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 08:21:49 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/23 09:21:57 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		cache;
	int		i;
	char	*sub;

	cache = start;
	i = 0;
	sub = (char *)malloc((sizeof(char)) * len + 1);
	if (!sub)
		return (NULL);
	while ((start < len + cache) && (s[start]))
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
