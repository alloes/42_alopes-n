/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:05:44 by alopes-n          #+#    #+#             */
/*   Updated: 2022/04/18 20:17:32 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	ir;
	int	swap;

	i = 0;
	ir = size -1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[ir];
		tab[ir] = swap;
		i++;
		ir--;
	}
}
