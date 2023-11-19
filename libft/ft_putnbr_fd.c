/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:40:21 by made-alm          #+#    #+#             */
/*   Updated: 2022/12/05 15:40:22 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	finn;

	if (n < 0)
	{
		finn = (unsigned int)(-n);
		ft_putchar_fd('-', fd);
	}
	else
		finn = (unsigned int)n;
	if (finn > 9)
		ft_putnbr_fd(finn / 10, fd);
	ft_putchar_fd((char)(finn % 10 + '0'), fd);
}
