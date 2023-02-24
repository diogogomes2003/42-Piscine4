/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:29:36 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/19 14:43:34 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
		++j;
		}
	++i;
	}
	return (0);
}

// int main()
// {
// 	printf("%s\n", ft_strstr("testisaidjsaidna","e"));	
// 	printf("%s", strstr("testsaidnainsdiandins","e"));
// 	return(0);
// }
