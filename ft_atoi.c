/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:53:23 by evportel          #+#    #+#             */
/*   Updated: 2023/10/28 17:38:13 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int			index;
	int			mult;
	long int	number;

	index = 0;
	mult = 1;
	number = 0;
	while ((nptr[index] >= '\t' && nptr[index] <= '\r') || nptr[index] == ' ')
		index++;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index++] == '-')
			mult = mult * -1;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		number = (number * 10) + (nptr[index] - '0');
		index++;
	}
	number = number * mult;
	if (number > 2147483647 || number < -2147483647)
		ft_push_swap_error();
	return (number);
}
