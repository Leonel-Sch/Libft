/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pileadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:35:11 by lscheupl          #+#    #+#             */
/*   Updated: 2024/08/07 13:21:35 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_pileadd_front(t_pile **pile, t_pile *new)
{
	t_pile *cache;
	
	cache = *pile;
	new -> next = *pile;
	cache -> prev = new;
	*pile = new;
}
