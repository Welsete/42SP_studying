/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welsete <welsete@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 00:07:18 by welsete           #+#    #+#             */
/*   Updated: 2025/05/14 00:07:20 by welsete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	nt;
	char		c;

	nt = nb;
	if (nt < 0)
	{
		nt *= -1;
		write(1, "-", 1);
	}
	if (nt <= 9)
	{
		c = nt + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nt / 10);
		ft_putnbr(nt % 10);
	}
}
// int	main(void)
// {
// 	ft_putnbr(42);
// 	write(1, "\n", 1);
// 	ft_putnbr(-42);
// 	write(1, "\n", 1);
// 	ft_putnbr(2147483647); // INT_MAX
// 	write(1, "\n", 1);
// 	ft_putnbr(-2147483648); // INT_MIN
// 	write(1, "\n", 1);
// 	return (0);
// }