/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atasyure <atasyure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 04:25:36 by atasyure          #+#    #+#             */
/*   Updated: 2023/02/07 00:30:33 by atasyure         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	bas;
	char	son;

	bas = '0';
	son = '9';
	while (bas <= son)
	{
		write (1, &bas, 1);
	bas++;
	}
}
