/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:46:54 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/05 09:20:25 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	bp;

	bp = 'z';
	while (bp >= 'a')
	{
		write(1, &bp, 1);
		bp--;
	}
}

//int main (void)
//{
//    ft_print_reverse_alphabet();
//    return(0);
//}
