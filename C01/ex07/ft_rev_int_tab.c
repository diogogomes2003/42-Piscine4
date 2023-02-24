/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:01:47 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/08 12:14:40 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	cont;
	int	x;

	x = size - 1;
	cont = 0;
	while (cont < size / 2)
	{
		temp = tab[cont];
		tab[cont] = tab[x];
		tab[x] = temp;
		cont++;
		x--;
	}
}
// int main ()
// {
// 	int tab[19] = {0,1,2,3,4,5,22,123,123,12,31,3,12,3,1,23,123,2,100};
// 	ft_rev_int_tab(tab,19);
// 	int i = 0;
// 	while(i < 19)
// 	{
// 		printf("%i ", tab[i]);
// 		i++;
// 	}
// 	return (0);
// } 