/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_map.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katozats <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/15 17:49:37 by katozats      #+#    #+#                 */
/*   Updated: 2019/07/15 18:36:47 by katozats      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *results;
	int i;

	i = 0;
	results = malloc((length) * sizeof(int));
	while (i < length)
	{
		results[i] = (*f)(tab[i]);
		i++;
	}
	return (results);
}
