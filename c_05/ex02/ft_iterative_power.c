/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:00:57 by alopes-n          #+#    #+#             */
/*   Updated: 2022/04/22 17:56:55 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power < 0)
	{
		return (0);
	}
	else if ((nb == 0 && power == 0) || power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		nb = result * nb;
		i++;
	}
	return (nb);
}
