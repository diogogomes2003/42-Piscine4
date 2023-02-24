/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:16:34 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/05 09:14:02 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	bp;

	bp = 'a';
	while (bp <= 'z')
	{
		write(1, &bp, 1);
		bp++;
	}
}

//int main(void) 
//{
//     ft_print_alphabet();
//     return(0);
//}
