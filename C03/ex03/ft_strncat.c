/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atasyure <atasyure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:25:34 by atasyure          #+#    #+#             */
/*   Updated: 2023/02/17 11:01:21 by atasyure         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (dest[i])
	{
		i++;
	}
	while (i2 < nb && src[i2])
	{
		dest[i + i2] = src [i2];
			i2++;
	}
	dest[i + i2] = '\0';
	return (dest);
}
