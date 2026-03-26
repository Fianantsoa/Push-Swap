/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finoment <finoment@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 08:32:30 by finoment          #+#    #+#             */
/*   Updated: 2026/03/25 18:21:50 by finoment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_pile(const char *name, int *pile, int size)
{
	int	i;

	i = 0;
	printf("%s: ", name);
	while (i < size)
	{
		printf("%d ", pile[i]);
		i++;
	}
	printf("\n");
}

int	main(int argc, char *argv[])
{
	char	*argstr;

	if (argc == 2)
		argstr = argv[1];
	int pile_a[5] = {3, 1, 2, 4, 5};
	int size_a = 5;

	int pile_b[5] = {9, 8, 6, 7, 10};
	int size_b = 5;

	print_pile("pile a", pile_a, size_a);
	print_pile("pile b", pile_b, size_b);

	reverse_rotate(pile_a, size_a, "rra");
	reverse_rotate(pile_b, size_b, "rrb");
	rrr(pile_a, size_a, pile_b, size_b);

	print_pile("pile a", pile_a, size_a);
	print_pile("pile b", pile_b, size_b);

	return 0;
}