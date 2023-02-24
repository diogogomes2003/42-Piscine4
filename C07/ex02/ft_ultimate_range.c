/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:47:45 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/22 10:42:43 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	r;
	int	i;
	int	*buf;
	int	*d;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	r = max - min;
	buf = malloc(r * sizeof(int));
	d = buf;
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = buf;
	while (i < r)
	{
		buf[i] = min + i;
		i++;
	}
	return (r);
}

int	main(int ac, char **av)
{
	int	max;
	int	min;
	int	*range;
	int	i;
	int	s;

	i = 0; 
	min = ft_atoi(av[1]);
	max = ft_atoi(av[2]);
	if (ac == 3)
	{
		s = ft_ultimate_range(&range, min, max);
		while (i < s)
		{
			printf("%d ", range[i]);
			i++;
		}
	}
}
