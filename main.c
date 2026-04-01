/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.c											 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: finoment <finoment@student.42antananari	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/03/19 08:32:30 by finoment		  #+#	#+#			 */
/*   Updated: 2026/04/01 14:28:45 by finoment		 ###   ########.fr	   */
/*																			*/
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

void	ft_is_sorted(int *pile, int size)
{
	int	i;

	if (!pile || size == 0)
	{
		printf("NOT SORTED\n");
		return ;
	}
	i = 0;
	while (i < size - 1 && pile[i] < pile[i + 1])
		i++;
	if (i == size - 1)
		printf("SORTED\n");
	else
		printf("NOT SORTED\n");
}

static void	ft_show_and_tri(int *pile_a, int *pile_b, int size_a, int size_b)
{
	print_pile("pile a", pile_a, size_a);
	print_pile("pile b", pile_b, size_b);
	printf("size a : %d et size b : %d\n", size_a, size_b);
	pb(pile_a, &size_a, pile_b, &size_b);
	pb(pile_a, &size_a, pile_b, &size_b);
	pa(pile_b, &size_b, pile_a, &size_a);
	printf("size a : %d et size b : %d\n", size_a, size_b);
	print_pile("pile a", pile_a, size_a);
	print_pile("pile b", pile_b, size_b);
}

int	main(int argc, char *argv[])
{
	int		*pile_a;
	int		*pile_b;
	int		size_a;
	int		size_b;
	int		size_a_origin;
	char	*str;

	pile_a = NULL;
	size_a = argc - 1;
	if (size_a == 0)
		return (0);
	if (size_a > 1)
	{
		str = ft_argv_str(argv, size_a);
		size_a = ft_str_to_int_tab(str, &pile_a);
		free(str);
	}
	if (size_a == 1)
		size_a = ft_str_to_int_tab(argv[1], &pile_a);
	size_a_origin = size_a;
	pile_b = malloc(sizeof(int) * size_a);
	size_b = 0;
	if (!pile_b)
		exit(EXIT_FAILURE);
	ft_is_sorted(pile_a, size_a);
	ft_show_and_tri(pile_a, pile_b, size_a, size_b);
	if (pile_a)
		free(pile_a);
	free(pile_b);
	return (0);
}
