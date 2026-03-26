/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finoment <finoment@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 08:43:24 by finoment          #+#    #+#             */
/*   Updated: 2026/03/25 18:29:55 by finoment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"

void	swap(int *pile, int size, const char *name);
void	ss(int *pile_a, int size_a, int *pile_b, int size_b);
void	push(int *src, int *size_src, int *dst, int *size_dst, const char *name);
void	rotate(int *pile, int size, const char *name);
void	rr(int *pile_a, int size_a, int *pile_b, int size_b);
void	reverse_rotate(int *pile, int size, const char *name);
void	rrr(int *pile_a, int size_a, int *pile_b, int size_b);
