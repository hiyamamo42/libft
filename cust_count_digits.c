/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cust_count_digits.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:06:08 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/16 12:06:09 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cust_count_digits(int n)
{
	int	count;

	count = 1;
	while (n > 9)
	{
		count++;
		n /= 10;
	}
	return (count);
}
