/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_boolean.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katozats <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/13 21:01:56 by katozats      #+#    #+#                 */
/*   Updated: 2019/07/13 21:10:53 by katozats      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
# define EVEN(nbr) ((nbr % 2) == 0)
# include <unistd.h>

typedef int	t_bool;

#endif
