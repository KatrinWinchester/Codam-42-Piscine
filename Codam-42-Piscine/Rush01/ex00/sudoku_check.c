/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sudoku_check.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: katozats <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/14 13:40:44 by katozats       #+#    #+#                */
/*   Updated: 2019/07/14 21:30:04 by jvan-sni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdlib.h>

void	zero_array(int *array, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		array[i] = 0;
		i++;
	}
}

int		is_in_array(int *array, int length, int number)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (array[i] && array[i] == number)
			return (1);
		i++;
	}
	return (0);
}

int		check_column(int *sudoku, int index)
{
	int column_index;
	int i;
	int memory[9];
	int j;

	zero_array(memory, 9);
	column_index = (index % 9);
	i = 0;
	j = 0;
	while (column_index + (i * 9) < 81)
	{
		if (sudoku[column_index + (i * 9)] != 0)
		{
			if (is_in_array(memory, 9, sudoku[column_index + (i * 9)]))
				return (0);
			memory[j] = sudoku[column_index + (i * 9)];
			j++;
		}
		i++;
	}
	return (1);
}

int		check_row(int *sudoku, int index)
{
	int row_index;
	int i;
	int memory[9];
	int j;

	zero_array(memory, 9);
	row_index = index / 9;
	i = 0;
	j = 0;
	while (i < 9)
	{
		if (sudoku[i + (row_index * 9)] != 0)
		{
			if (is_in_array(memory, 9, sudoku[i + (row_index * 9)]))
				return (0);
			memory[j] = sudoku[i + (row_index * 9)];
			j++;
		}
		i++;
	}
	return (1);
}

int		check_cell(int *sudoku, int index)
{
	int cell_start_index;
	int memory[9];
	int i;
	int j;
	int k;

	zero_array(memory, 9);
	cell_start_index = calculate_cell_start(index / 3);
	i = 0;
	k = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (is_in_array(memory, 9, sudoku[
				cell_start_index + (i + (j * 9))]))
				return (0);
			memory[k] = sudoku[cell_start_index + (i + (j * 9))];
			k++;
			j++;
		}
		i++;
	}
	return (1);
}
