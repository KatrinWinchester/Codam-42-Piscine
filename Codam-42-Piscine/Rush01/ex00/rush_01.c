/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush_01.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jvan-sni <jvan-sni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/14 16:26:44 by jvan-sni       #+#    #+#                */
/*   Updated: 2019/07/14 22:04:32 by jvan-sni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char **argv)
{
	int *parsed_sudoku;
	int *solved_sudoku;

	parsed_sudoku = parse_args(argc - 1, argv + 1);
	if (parsed_sudoku == NULL)
	{
		free(parsed_sudoku);
		display_error();
		return (0);
	}
	solved_sudoku = solve_sudoku(parsed_sudoku, 0);
	if (solved_sudoku != NULL)
		display_sudoku(solved_sudoku);
	else
		display_error();
	free(solved_sudoku);
	return (0);
}
