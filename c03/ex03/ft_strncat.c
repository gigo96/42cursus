/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:27:35 by chsong            #+#    #+#             */
/*   Updated: 2021/10/20 23:11:39 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_cnt;
	unsigned int	src_cnt;

	dest_cnt = 0;
	while (*(dest + dest_cnt))
		dest_cnt++;
	src_cnt = 0;
	while (src_cnt < nb)
	{
		*(dest + dest_cnt) = *(src + src_cnt);
		dest_cnt++;
		src_cnt++;
	}
	*(dest + dest_cnt) = '\0';
	return (dest);
}

#include <stdio.h>

int main()
{
	char arr1[] = "hello";
	char arr2[] = "world";
	ft_strncat(arr1, arr2, 4);
	printf("%s\n", arr1);
}
