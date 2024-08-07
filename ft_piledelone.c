/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piledelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:35:18 by lscheupl          #+#    #+#             */
/*   Updated: 2024/08/07 15:31:08 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_piledelone(t_pile *pile, void (*del)(int))
{
	int	supr;

	supr = pile->content;
	del(supr);
	free(pile);
}
