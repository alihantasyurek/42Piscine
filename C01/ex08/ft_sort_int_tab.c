/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atasyure <atasyure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:28:38 by atasyure          #+#    #+#             */
/*   Updated: 2023/02/11 13:36:02 by atasyure         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size -1)
	{
		while (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i +1];
			tab[i + 1] = swap;
			i = 0;
		}
		i++;
	}
}
