/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:38:15 by alopes-n          #+#    #+#             */
/*   Updated: 2022/04/18 18:46:35 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_mod;
	int	save;

	save = *a;
	div_mod = *a / *b;
	*a = div_mod;
	div_mod = save % *b;
	*b = div_mod;
}
