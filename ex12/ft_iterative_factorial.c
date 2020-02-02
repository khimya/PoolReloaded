/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 13:03:37 by ybenbrai          #+#    #+#             */
/*   Updated: 2019/03/25 12:09:59 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int number;

	i = 1;
	number = 1;
	if (nb < 0 || nb > 13)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	else if (nb > 1)
	{
		while (i <= nb)
		{
			number = number * i;
			i++;
		}
	}
	return (number);
}
