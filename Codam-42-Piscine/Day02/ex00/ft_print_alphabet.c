/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: katozats <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/03 14:17:04 by katozats      #+#    #+#                 */
/*   Updated: 2019/07/04 17:29:32 by katozats      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		ft_putchar(n);
		n++;
	}
}
