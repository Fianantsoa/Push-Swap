/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finoment <finoment@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:04:51 by finoment          #+#    #+#             */
/*   Updated: 2026/03/26 15:04:10 by finoment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_valid_number(str)
{
	
}

int	*ft_str_to_int_tab(const char *str)
{
	char	**tab_str;
	int		i;

	if (!str || !*str)
		return NULL;
	tab_str = ft_split(str, ' ');
	i = -1;
	while (tab_str[++i])
	{
		
	}
	free(tab_str);
}