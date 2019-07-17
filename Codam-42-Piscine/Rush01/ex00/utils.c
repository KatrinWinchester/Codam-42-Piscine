/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jvan-sni <jvan-sni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/14 21:19:04 by jvan-sni       #+#    #+#                */
/*   Updated: 2019/07/14 21:27:23 by jvan-sni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		calculate_cell_start(int set_index)
{
	return (((set_index % 3) * 3) + (27 * (set_index / 3 / 3)));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
