/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:55:05 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/22 18:26:15 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	if (s[i + 1] == c)
		return ((char *)&s[i + 1]);
	return (NULL);
}

// int main (void)
//{
//	char s[] = "lalala";
//	int c = 97;
//	printf("%s", ft_strchr(s, c));
//	return (0);
//}