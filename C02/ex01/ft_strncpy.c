/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:27:24 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/09 12:47:24 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

//int main()
//{
//	char dest[] = "fedcba";
//	char src[] = "abcdef";
//	int n;
//
//	n = 6;
//	printf("%s\n", strncpy(dest, src, n));
//	printf("%s", ft_strncpy(dest, src, n));
//	return (0);
//}
