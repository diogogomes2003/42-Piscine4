/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 08:41:28 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/07 15:13:41 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	d;
	if (nb <0)
	{ 
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 0 && nb < 10)
	{
		nb = nb + 48;
		write (1, &nb, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		d = (nb % 10) + 48;
		write (1, &d, 1);
	}
}

int main(void)
{
	ft_putnbr(-42);
	return (0);
}
