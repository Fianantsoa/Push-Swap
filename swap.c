/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finoment <finoment@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 08:37:10 by finoment          #+#    #+#             */
/*   Updated: 2026/03/25 18:25:26 by finoment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *pile, int size, const char *name)
{
	int	temp;

	if (size < 2)
		return ;
	temp = pile[0];
	pile[0] = pile[1];
	pile[1] = temp;
	if (!ft_strncmp(name, "sa", 2) || !ft_strncmp(name, "sb", 2))
		ft_printf("%s\n", name);
}

void	ss(int *pile_a, int size_a, int *pile_b, int size_b)
{
	swap(pile_a, size_a, "ss");
	swap(pile_b, size_b, "ss");
	ft_printf("ss\n");
}
