/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:19:39 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/22 20:48:10 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const unsigned char *s11;
	const unsigned char *s22;

	i = 0;
	s11 = (const unsigned char *)s1;
	s22 = (const unsigned char *)s2;
	while ((s11[i] == s22[i]) && (i <= n))
		i++;
	return (s11[i] - s22[i]);
}
