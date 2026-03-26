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

static void	ft_free_inttab(int *tab, size_t len)
{
	size_t	i;

	i = 0;
	if (tab == NULL)
		return ;
	while (i < len && tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	main(int argc, char *argv[])
{
	int	*pile_a;
	int size_a;

	if (argc == 2)
		size_a = ft_str_to_int_tab(argv[1], &pile_a);
	
	int pile_b[5] = {9, 8, 6, 7, 10};
	int size_b = 5;

	print_pile("pile a", pile_a, size_a);
	print_pile("pile b", pile_b, size_b);

	reverse_rotate(pile_a, size_a, "rra");
	reverse_rotate(pile_b, size_b, "rrb");
	rrr(pile_a, size_a, pile_b, size_b);

	print_pile("pile a", pile_a, size_a);
	print_pile("pile b", pile_b, size_b);
	ft_free_inttab(pile_a, size_a);

	return 0;
}