/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_pile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finoment <finoment@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 14:33:23 by finoment          #+#    #+#             */
/*   Updated: 2026/04/01 14:34:07 by finoment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_argv_str(char *argv[], int size)
{
	int		i;
	char	*arg_to_str;
	char	*temp;

	i = 0;
	arg_to_str = ft_strdup("");
	while (argv[++i] && i < size + 1)
	{
		temp = arg_to_str;
		arg_to_str = ft_strjoin(temp, argv[i]);
		free(temp);
		if (argv[i + 1])
		{
			temp = arg_to_str;
			arg_to_str = ft_strjoin(temp, (char *) " ");
			free(temp);
		}
	}
	return (arg_to_str);
}
