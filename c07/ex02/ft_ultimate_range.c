/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmbunga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:03:50 by zmbunga           #+#    #+#             */
/*   Updated: 2023/12/06 22:03:53 by zmbunga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	index;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min - 1;
	buffer = malloc(bound * sizeof(int));
	if (buffer == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index <= bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound + 1);
}
