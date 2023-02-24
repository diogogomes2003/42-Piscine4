/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:28:58 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/08 13:25:12 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{	
	int	i;
	int	j;
	int	min_idx;

	i = 0;
	while (i < size - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_idx])
			{
				min_idx = j;
			}
			if (min_idx != i)
				swap(&tab[min_idx], &tab[i]);
			j++;
		}
		i++;
	}
}

// void print(int tab[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         printf("%d ", tab[i]);
//     printf("\n");
// }

// int main()
// {
// 	int tab[5] = {1,10,9,3,2};
// 	int n;
// 	n = 5;
// 	ft_sort_int_tab(tab,n);
// 	print(tab, n);
// 	return (0);
// }