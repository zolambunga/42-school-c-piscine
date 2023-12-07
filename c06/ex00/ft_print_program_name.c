/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmbunga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:48:20 by zmbunga           #+#    #+#             */
/*   Updated: 2023/12/04 21:48:23 by zmbunga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	contador(char *arg[])
{
	int		i;

	i = 0;
	while (arg[0][i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int ar, char *arg[])
{
	int		a;

	a = contador(arg);
	if (ar > 0)
	{
		write(1, arg[0], a);
	}
	write (1, "\n", 1);
	return (0);
}
