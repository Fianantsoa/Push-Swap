/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finoment <finoment@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:04:51 by finoment          #+#    #+#             */
/*   Updated: 2026/04/01 14:32:11 by finoment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_free_strtab(char **tab)
{
	size_t	i;

	i = 0;
	if (tab == NULL || *tab == NULL)
		return ;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	ft_not_int_free(char *c, char **tab_str)
{
	if (ft_isalpha(*c) && (*c != 43 || *c != 45))
	{
		ft_free_strtab(tab_str);
		return (1);
	}
	if ((*c == 43 || *c == 45) && (*(c + 1) == 43 || *(c + 1) == 45))
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
	char	*c;

	if (tab_str == NULL || *tab_str == NULL)
		return (0);
	i = -1;
	while (tab_str[++i])
	{
		j = -1;
		while (tab_str[i][++j])
		{
			c = &tab_str[i][j];
			if (ft_not_int_free(c, tab_str))
				return (0);
		}
	}
	return (i);
}

int	*ft_to_tab_int(char **tab_str, int size)
{
	int	i;
	int	*tab_int;

	tab_int = (int *)(malloc(sizeof(int) * (size + 1)));
	i = 0;
	while (i < size)
	{
		tab_int[i] = ft_atoi(tab_str[i]);
		free(tab_str[i]);
		i++;
	}
	tab_int[i] = '\0';
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
	if (!*pile_a)
		return (0);
	return (size);
}
