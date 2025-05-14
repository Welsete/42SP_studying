/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welsete <welsete@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:37:35 by welsete           #+#    #+#             */
/*   Updated: 2025/05/13 20:37:37 by welsete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n <= 9)
	{
		n = n + '0';
		ft_putchar(n);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	b;

	i = 0;
	while (i <= 98)
	{
		b = i + 1;
		while (b <= 99)
		{
			if (i < 10)
				write(1, "0", 1);
			ft_putnbr(i);
			write(1, " ", 1);
			if (b < 10)
				write(1, "0", 1);
			ft_putnbr(b);
			if(!(i == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		i++;
	}
}

// int main (void)
// {
// 	ft_print_comb2();
// 	return (0);
// }