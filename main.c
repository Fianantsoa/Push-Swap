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
#include <stdio.h>

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

int	ft_is_sorted(int *pile, int size)
{
	int	i;

	i = 0;
	while (pile[i] < pile[i + 1] && pile[i + 1])
		i++;
	printf("%d %d\n", size, i);
	if (size == i)
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int		*pile_a;
	int 	size_a;
	char	*str;
	int 	size_a_origin;

	pile_a = NULL;
	printf("Number arguments : %d\n", argc);
	size_a = argc - 1;
	if (size_a > 1)
	{
		str = ft_argv_str(argv, size_a);
		size_a = ft_str_to_int_tab(str, &pile_a);
		free(str);
	}
	if (size_a == 1)
		size_a = ft_str_to_int_tab(argv[1], &pile_a);
	// size_a_origin = size_a;
	// if(ft_is_sorted(pile_a, size_a_origin))
	// 	printf("Sorted\n");
	// else
	// 	printf("Not sorted\n");

	int pile_b[5] = {9, 8, 6};
	int size_b = 3;
	print_pile("pile a", pile_a, size_a);
	print_pile("pile b", pile_b, size_b);
	reverse_rotate(pile_a, size_a, "rra");
	reverse_rotate(pile_b, size_b, "rrb");
	rrr(pile_a, size_a, pile_b, size_b);
	print_pile("pile a", pile_a, size_a);
	print_pile("pile b", pile_b, size_b);
	if (pile_a)
		free(pile_a);
	return 0;
}