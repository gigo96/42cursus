/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_space.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 08:31:55 by chsong            #+#    #+#             */
/*   Updated: 2022/01/10 08:33:30 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_space(int n)
{
	if (n > 0)
		ft_putchar_fd(1, ' ');
	else
		ft_putchar_fd(1, '-');
	return (1);
}