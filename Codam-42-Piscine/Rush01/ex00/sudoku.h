/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sudoku.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jvan-sni <jvan-sni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/14 13:57:07 by jvan-sni       #+#    #+#                */
/*   Updated: 2019/07/14 21:27:37 by jvan-sni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdlib.h>
# include <unistd.h>

int		check_row(int *sudoku, int i);
int		check_column(int *sudoku, int i);
int		check_cell(int *sudoku, int i);

int		*parse_args(int argc, char **argv);
int		calculate_cell_start(int set_index);
void	ft_putchar(char c);
void	display_sudoku(int *sudoku);
void	display_error();

int		*solve_sudoku(int *sudoku, int i);

#endif
