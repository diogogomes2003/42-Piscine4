/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:45:05 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/05 09:30:18 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int n1, int n2, int n3)
{
	if (n1 != n2 || n1 != n3 || n2 != n3)
	{
		write(1, &n1, 1);
		write(1, &n2, 1);
		write(1, &n3, 1);
		if (n1 != '7')
			write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 +1;
		while (n2 <= '8')
		{
			n3 = n2 +1;
			while (n3 <= '9')
			{
				print(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

//int main (void)
//{
//	ft_print_comb();
//	return (0);
//}
