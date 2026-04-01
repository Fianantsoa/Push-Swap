/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finoment <finoment@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 08:43:44 by finoment          #+#    #+#             */
/*   Updated: 2026/04/01 15:07:12 by finoment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_remove_first(int *src, int *size_src)
{
	int	i;

	i = 0;
	while (i < ((*size_src) - 1))
	{
		src[i] = src[i + 1];
		i++;
	}
	(*size_src)--;
}

static void	ft_insert_at_head(int *dst, int *size_dst, int value)
{
	int	i;

	i = *size_dst;
	while (i > 0)
	{
		dst[i] = dst[i - 1];
		i--;
	}
	dst[0] = value;
	(*size_dst)++;
}

void	pa(int *pile_b, int *size_b, int *pile_a, int *size_a)
{
	int	first_to_push;

	if (*size_b == 0)
		return ;
	first_to_push = pile_b[0];
	ft_insert_at_head(pile_a, size_a, first_to_push);
	ft_remove_first(pile_b, size_b);
	ft_printf("pb\n");
}

void	pb(int *pile_a, int *size_a, int *pile_b, int *size_b)
{
	int	first_to_push;

	if (*size_a == 0)
		return ;
	first_to_push = pile_a[0];
	ft_insert_at_head(pile_b, size_b, first_to_push);
	ft_remove_first(pile_a, size_a);
}
