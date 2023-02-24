/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:40:24 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/05 10:10:13 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a, int b)
{
	int	c;
	int	d;
	int	e;
	int	f;

	if (a != b)
	{
		c = ((a / 10) + 48);
		d = ((a % 10) + 48);
		e = ((b / 10) + 48);
		f = ((b % 10) + 48);
		write (1, &c, 1);
		write (1, &d, 1);
		write (1, " ", 1);
		write (1, &e, 1);
		write (1, &f, 1);
		if (c == '9' && d == '8' && e == '9' && f == '9')
		{
		}
		else
			write(1, ",", 1);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a, b);
			b++;
		}
	a++;
	}
}

//int main(void)
//{
//	ft_print_comb2();
//	return(0);
//}
