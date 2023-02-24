/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:49:08 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/07 13:00:22 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rdiv;

	if (b != 0)
	{
		div = *a / *b;
		rdiv = *a % *b;
		*a = div;
		*b = rdiv;
	}
}

// int main()
// {
// 	int a;
// 	int b;

// 	a = 10;
// 	b = 5;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("Div:%i Rdiv:%i", a, b);
// 	return (0);
// }