/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welsete <welsete@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:54:30 by welsete           #+#    #+#             */
/*   Updated: 2025/05/19 14:54:31 by welsete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	print_numbers(int x, int y, int z)
{
    if (z < 10)
    {
        ft_putchar(x + '0');
        ft_putchar(' ');
        ft_putchar(y + '0');
		ft_putchar(' ');
        ft_putchar(z + '0');
        ft_putchar('\n');
		print_numbers(x, y, z + 1);
	    }
}
void	print_pairs(int x, int y)
{
	if (y <= 8)
	{
		print_numbers(x, y, y + 1);
		print_pairs(x, y + 1);
	}
}
void	print_combinations(int x)
{
	if (x <= 7)
	{
		print_pairs(x, x + 1);
		print_combinations(x + 1);
	}
}

int    main(void)
{
    print_combinations(0);
    return (0);
}
