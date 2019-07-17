/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: katozats <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/03 22:24:20 by katozats      #+#    #+#                 */
/*   Updated: 2019/07/04 19:09:12 by katozats      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_printsmth(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
	else
	{
		ft_putchar(n / 10 + '0');
		ft_putchar(n % 10 + '0');
	}
}

void	ft_printall(int a, int b)
{
	ft_printsmth(a);
	ft_putchar(' ');
	ft_printsmth(b);
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 99)
	{
		b = a;
		while (b <= 99)
		{
			if (a != b)
			{
				ft_printall(a, b);
			}
			b++;
		}
		a++;
	}
}
