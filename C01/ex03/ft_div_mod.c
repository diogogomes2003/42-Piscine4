/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:04:22 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/07 14:48:00 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int main()
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;
//
// 	a = 10;
// 	b = 5;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("Div: %i Rdiv:%i", div, mod);
// 	return (0);
// }