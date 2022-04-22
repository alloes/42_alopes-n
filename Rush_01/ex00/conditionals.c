/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditionals.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:47:51 by alopes-n          #+#    #+#             */
/*   Updated: 2022/04/16 22:39:44 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* "4 3 2 1 - 1 2 2 2 - 4 3 2 1 - 1 2 2 2"
 "col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right
		4 3 2 1
	4			  1
	3			  2
	2		  	  2
	1			  2
    	1 2 2 2
*/ 

void	if_find_4(int *user, int **matrix)
{
	int line;
	int collum;
	int n;
	int r;
	int m;

	line = 0;
	collum = 0;
	n = 0;
	r = 1;
	m = 0;

	while(line < 4)
	{
		while(collum < 4)
		{
			if(user/4 == 4)
			{
				if(user/4 < 4)
				{
				while (n < 4)
				matrix[n][collum] = r;
				r++;
				
				}
				
				if(user%4 < 4)
				{
				while (n < 4)
				matrix[line][n] = r;
				r++;
				}

				if(user/4 < 4)
				{
				while (n < 4)
				matrix[n][collum] = m;
				m++;
				}

				if(user%4 < 4)
				{
				while (n < 4)
				matrix[line][n] = m;
				m--;
				}
				
				r = 0;
			}
			j++;
		}
		i++;
	}
}