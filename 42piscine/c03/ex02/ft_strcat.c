/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:52:18 by destrada          #+#    #+#             */
/*   Updated: 2022/08/23 18:36:18 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	i2 = 0;
	while (src[i2] != '\0')
	{
		dest[i] = src[i2];
		i2++;
		i++;
	}
	dest[i] = src[i2];
	return (dest);
}