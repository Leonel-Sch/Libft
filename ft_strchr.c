/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:55:05 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/23 10:10:25 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

// int main (void)
//{
//	char s[] = "lalala";
//	int c = 97;
//	printf("%s", ft_strchr(s, c));
//	return (0);
//}