/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:08:15 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/22 09:43:38 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *src)
{
	int	i;
	int	j;
	int	a;

	a = 0;
	j = 1;
	i = 0;
	while (src[i] == ' ' || (src[i] >= 9 && src[i] <= 13))
		i++;
	while (src[i] == '+' || src[i] == '-')
	{
		if (src[i] == '-')
			j *= -1;
		i++;
	}
	while (src[i] >= '0' && src[i] <= '9')
	{
		a = (a * 10) + (src[i] - '0');
		i++;
	}
	a *= j;
	return (a);
}

int	*ft_range(int min, int max)
{
	int	r;
	int	i;
	int	*buffer;
	int	*d;

	if (min >= max)
		return (0);
	r = max - min;
	buffer = malloc(r * sizeof(int));
	d = buffer;
	if (!d)
		return (0);
	i = 0;
	while (i < r)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}

int	main(int ac, char **av)
{
	int	*tab;
	int	i;
	int	min;
	int	max;
	int	r;

	min = ft_atoi(av[1]);
	max = ft_atoi(av[2]);
	r = max - min;
	i = 0;
	if (ac == 3)
	{
		tab = ft_range(min, max);
		while (i < r)
		{
			printf("%d ", tab[i]);
			i++;
		}
	}
	return (0);
}
