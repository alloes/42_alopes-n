/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:37:49 by alopes-n          #+#    #+#             */
/*   Updated: 2022/04/13 18:14:08 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	draw(int a, int b)
{

	ft_putchar((a/10 )+'0');

	/*char	c;

	c = (a / 10) + '0';
	write(1, &c, 1);
	c = (a % 10) + '0';
	write(1, &c, 1);
	write(1, " ", 1);
	c = (b / 10) + '0';
	write(1, &c, 1);
	c = (b % 10) + '0';
	write(1, &c, 1);*/
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			draw(a, b);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
