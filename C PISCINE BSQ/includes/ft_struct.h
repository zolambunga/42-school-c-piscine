/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:55:33 by efrancis          #+#    #+#             */
/*   Updated: 2023/12/03 15:55:40 by efrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCT_H
# define FT_STRUCT_H

typedef struct s_map
{
	char	empty;
	char	obs;
	char	full;
	char	**matrix;
	int		is_valid;
}	t_map;

typedef struct s_square
{
	int	x_start;
	int	y_start;
	int	x_end;
	int	y_end;
}	t_square;

#endif
