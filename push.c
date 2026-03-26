/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finoment <finoment@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 08:43:44 by finoment          #+#    #+#             */
/*   Updated: 2026/03/25 18:27:19 by finoment         ###   ########.fr       */
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

void	push(int *src, int *size_src, int *dst, int *size_dst, const char *name)
{
	int	first_to_push;

	if (*size_src == 0)
		return ;
	first_to_push = src[0];
	ft_insert_at_head(dst, size_dst, first_to_push);
	ft_remove_first(src, size_src);
	ft_printf("%s\n", name);
}
