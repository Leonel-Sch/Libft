/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 20:38:14 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/22 21:14:37 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_calloc(size_t nmemb, size_t size)
 {
	void *tab;
	long double calcul;
	int i;

	calcul = nmemb * size;
	i = 0;
	if (calcul > 2147483647 || calcul < 0)
		return (NULL);
	if (nmemb <= 0 || size <= 0)
		return (NULL);
	tab = (void *)malloc(nmemb * size);
	if (!tab)
		return (NULL);
	while (nmemb >= i)
	{
		tab[i]=malloc(size);
		if(!tab[i])
			return (NULL);
		i++;
	}
	return (tab);
 }