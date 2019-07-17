/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sudoku_solve.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jvan-sni <jvan-sni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/14 13:30:45 by jvan-sni       #+#    #+#                */
/*   Updated: 2019/07/14 21:58:43 by jvan-sni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "sudoku.h"

void	traverse_empty_cells(int *sudoku, int *i)
{
	while (sudoku[*i] != 0 && *i < 81)
	{
		(*i)++;
	}
}

int		check_number(int *sudoku, int i)
{
	return (check_cell(sudoku, i) &&
		check_row(sudoku, i) &&
		check_column(sudoku, i));
}

int		*solve_sudoku(int *sudoku, int i)
{
	int term;
	int	*result;

	traverse_empty_cells(sudoku, &i);
	if (i >= 81)
		return (sudoku);
	term = 0;
	while (!term)
	{
		sudoku[i]++;
		if (sudoku[i] <= 9)
		{
			if (check_number(sudoku, i))
			{
				result = solve_sudoku(sudoku, i + 1);
				if (result != NULL)
					return (result);
			}
		}
		else
			term = 1;
	}
	sudoku[i] = 0;
	return (NULL);
}
