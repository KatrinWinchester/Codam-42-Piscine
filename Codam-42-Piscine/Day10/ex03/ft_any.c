/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_any.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katozats <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/15 21:44:47 by katozats      #+#    #+#                 */
/*   Updated: 2019/07/15 21:47:26 by katozats      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		if ((*f)(tab[i]) != 1)
			i++;
		else
			return (1);
	}
	return (0);
}
