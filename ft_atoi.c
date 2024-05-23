/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 20:26:28 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/22 20:37:41 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int ft_atoi(const char *nptr)
{
	int sum;
	int sign;
	int i;

	sign = 1;
	sum = 0;
	i = 0;
	if (nptr[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while(nptr[i] >= 48 && nptr[i] <= 57)
	{
		sum = sum * 10 + (nptr[i] - 48);
		i++;
	}
	return(sum * sign);
}

//int main (int argc, char **argv)
//{
//	if (argc != 2)
//		return (0);
//	printf("%d", ft_atoi(argv[1]));
//	return (0);	
//}