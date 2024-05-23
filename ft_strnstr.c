/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:50:36 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/23 17:42:33 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	cache;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while ((big[i]) && (i <= len))
	{
		j = 0;
		if (big[i] == little[j])
		{
			cache = i;
			while (big[i++] == little[j])
				j++;
			if (i >= len)
				return (NULL);
			if (j == ft_strlen(little))
				return ((char *)&big[cache]);
			i = cache;
		}
		i++;
	}
	return (NULL);
}

// int	main(int argc, char **argv)
//{
//	char	big[] = "lavieestbelle";
//	char	*little;
//	int		n;

//	little = argv[1];
//	n = 50;
//	printf("%s", ft_strnstr(big, little, n));
//	return (0);
//}
