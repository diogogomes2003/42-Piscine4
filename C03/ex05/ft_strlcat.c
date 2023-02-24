/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:13:52 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/20 12:57:42 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	slen;
	unsigned int	dlen;
	unsigned int	i;
	unsigned int	j;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	j = dlen;
	if (dlen >= size || size == 0)
		return (size + slen);
	else
	{
		while (src[i] != '\0' && (i < size - dlen - 1))
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
		return (dlen + slen);
	}
}

/*
int main()
{
	 char first[] = "test ";
	 char last[] = "long string";
	 int r;
	 int size = 20;
	 char buffer[size];
	 strcpy(buffer,first);
	 r = ft_strlcat(buffer,last,size);
	 puts(buffer);
	 printf("Value returned: %d\n",r);
	 if( r > size )
		 puts("String truncated");
	 else
		 puts("String was fully copied");
	 return(0);
}
*/
