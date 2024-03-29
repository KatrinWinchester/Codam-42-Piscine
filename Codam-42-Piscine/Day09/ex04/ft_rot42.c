/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rot42.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: katozats <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/12 13:10:12 by katozats      #+#    #+#                 */
/*   Updated: 2019/07/12 13:26:23 by katozats      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ((str[i] - 97 + 42) % 26) + 97;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ((str[i] - 65 + 42) % 26) + 65;
		++i;
	}
	return (str);
}
