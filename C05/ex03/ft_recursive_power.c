/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:10:02 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/21 12:12:28 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	j;
	int	i;
	int	a;

	j = 1;
	i = 0;
	a = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = (a * 10) + (str[i] - '0');
		i++;
	}
	a *= j;
	return (a);
}

int	ft_recursive_power(int nb, int power)
{
	int	r;

	r = nb;
	if (power > 0)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (r);
}
/*
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%i", ft_recursive_power(ft_atoi(av[1]),ft_atoi(av[2])));
	}
	return (0);
}
*/
