/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:06:44 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/18 14:08:46 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//int main()
//{
//	char dest[] = "sssssss";
//	char src[] = "xyzz";
//
//	printf("%s\n", strcpy(dest, src));
//	printf("%s", ft_strcpy(dest, src));
//
//	return (0);
//}
