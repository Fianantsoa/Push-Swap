/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finoment <finoment@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:04:51 by finoment          #+#    #+#             */
/*   Updated: 2026/03/27 15:44:27 by finoment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_free_strtab(char **tab)
{
	size_t	i;

	if (tab == NULL || *tab == NULL)
		return ;
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	ft_not_int_free(char c, char after_c, char **tab_str)
{
	if (ft_isalpha(c) && (c != 43 || c != 45))
	{
		ft_free_strtab(tab_str);
		return (1);
	}
	if ((c == 43 || c == 45) && (after_c == 43 || after_c == 45))
	{
		ft_free_strtab(tab_str);
		return (1);
	}
	return (0);
}

int	ft_is_tab_int(char **tab_str)
{
	int		i;
	int		j;
	char	c;
	char	after_c;

	if (tab_str == NULL || *tab_str == NULL)
		return (0);
	i = -1;
	while (tab_str[++i])
	{
		j = -1;
		while (tab_str[i][++j])
		{
			c = tab_str[i][j];
			after_c = tab_str[i][j + 1];
			if (ft_not_int_free(c, after_c, tab_str))
				return (0);
		}
	}
	return (i);
}

int	*ft_to_tab_int(char **tab_str, int size)
{
	int	i;
	int	*tab_int;

	tab_int = (int *)(malloc(sizeof(int) * size));
	i = 0;
	while (i < size)
	{
		tab_int[i] = ft_atoi(tab_str[i]);
		free(tab_str[i]);
		i++;
	}
	return (tab_int);
}

int	ft_str_to_int_tab(const char *str, int **pile_a)
{
	char	**tab_str;
	int		size;

	if (!str || !*str)
		return (0);
	tab_str = ft_split(str, ' ');
	size = ft_is_tab_int(tab_str);
	if (!size)
		return (0);
	*pile_a = ft_to_tab_int(tab_str, size);
	free(tab_str);
	if (!pile_a)
		return (0);
	return (size);
}