/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:53:00 by destrada          #+#    #+#             */
/*   Updated: 2022/08/13 15:24:54 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>

void	ft_print_comb(void)
{
	char	h;
	char	t;
	char	u;

	h = '0';
	while (h <= '9')
	{	
			t = h + 1;
		while (t <= '9')
		{
			u = t + 1;
			while (u <= '9')
			{	
				if (u != '2')
					write (1, ", ", 2);
				write (1, &h, 1);
				write (1, &t, 1);
				write (1, &u, 1);
			u++;
			}
		t++;
		}
		h++;
	}
}
