/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:50:36 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/22 20:47:38 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	cache;
	size_t	llen;

	i = 0;
	j = 0;
	llen = ft_strlen(little);
	//if (little)
	//	return ((char *)big);
	while ((big[i]) && (i <= len))
	{
		if (big[i] == little[j])
		{
			cache = i;
			while (big[i] == little[j])
			{
				i++;
				j++;
			}
			if (j == llen)
				return ((char *)&big[cache]);
			i = cache;
			j = 0;
		}
	i++;
	}
	return (NULL);
}

//int	main(int argc, char **argv)
//{
//	char big[] = "lavieestbelle";
//	char *little = argv[1];
//	int n = 50;
//	printf("%s", ft_strnstr(big, little, n));
//	return (0);
//}
