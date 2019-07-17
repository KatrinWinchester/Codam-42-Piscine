/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sudoku_utils.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mtabanja <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/14 14:55:00 by mtabanja       #+#    #+#                */
/*   Updated: 2019/07/14 22:04:03 by jvan-sni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <unistd.h>

int		parse_string(char *str, int *sudoku, int *index)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		if ((str[j] < '0' || str[j] > '9') && str[j] != '.')
			return (0);
		if (str[j] == '.')
			sudoku[*index] = 0;
		else
			sudoku[*index] = str[j] - '0';
		j++;
		(*index)++;
	}
	if (j != 9)
		return (0);
	return (1);
}

int		*parse_args(int argc, char **argv)
{
	int	i;
	int	x;
	int	*sudoku;

	i = 0;
	x = 0;
	sudoku = malloc(sizeof(*sudoku) * 81);
	if (argc != 9)
	{
		free(sudoku);
		return (NULL);
	}
	while (i < argc)
	{
		if (parse_string(argv[i], sudoku, &x) == 0)
		{
			free(sudoku);
			return (NULL);
		}
		i++;
	}
	return (sudoku);
}

void	display_sudoku(int *sudoku)
{
	int x;

	x = 0;
	while (x < 81)
	{
		ft_putchar(sudoku[x] + '0');
		if ((x + 1) % 9 == 0)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		x++;
	}
}

void	display_error(void)
{
	write(1, "Error\n", 6);
}
