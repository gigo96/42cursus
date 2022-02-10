/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:07:14 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 16:09:27 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_is_print(int pre_size, char *str)
{
	int	size;
	int	return_size;

	size = ft_strlen(str);
	return_size = size + pre_size;
	if (return_size - pre_size != size)
		return (-1);
	return (size);
}

int	ft_putstr(char *str, int size)
{
	int	return_size;

	return_size = ft_is_print(size, str);
	if (return_size == -1)
		return (return_size);
	write(1, str, ft_strlen(str));
	return (return_size);
}
