/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finoment <finoment@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 08:44:17 by finoment          #+#    #+#             */
/*   Updated: 2026/03/25 18:17:38 by finoment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(int *pile, int size, const char *name)
{
	int	i;
	int	to_put_first;

	if (size < 2)
		return ;
	i = size - 1;
	to_put_first = pile[i];
	while (i > 0)
	{
		pile[i] = pile[i - 1];
		i--;
	}
	pile[i] = to_put_first;
	if (!ft_strncmp(name, "rra", 3) || !ft_strncmp(name, "rrb", 3))
		ft_printf("%s\n", name);
}

void	rrr(int *pile_a, int size_a, int *pile_b, int size_b)
{
	reverse_rotate(pile_a, size_a, "rrr");
	reverse_rotate(pile_b, size_b, "rrr");
	ft_printf("rrr\n");
}
