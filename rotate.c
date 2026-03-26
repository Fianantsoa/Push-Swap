/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finoment <finoment@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 08:44:17 by finoment          #+#    #+#             */
/*   Updated: 2026/03/25 18:29:25 by finoment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(int *pile, int size, const char *name)
{
	int	i;
	int	to_put_last;

	if (size < 2)
		return ;
	i = 0;
	to_put_last = pile[0];
	while (i < (size - 1))
	{
		pile[i] = pile[i + 1];
		i++;
	}
	pile[i] = to_put_last;
	if (!ft_strncmp(name, "ra", 2) || !ft_strncmp(name, "rb", 2))
		ft_printf("%s\n", name);
}

void	rr(int *pile_a, int size_a, int *pile_b, int size_b)
{
	rotate(pile_a, size_a, "rr");
	rotate(pile_b, size_b, "rr");
	ft_printf("rr\n");
}
