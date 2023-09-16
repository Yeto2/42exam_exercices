/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:44:13 by yessemna          #+#    #+#             */
/*   Updated: 2023/09/04 21:38:12 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
		if(n % 2 == 0)
			return (1);
		return (0);
}

int main()
{
	int n;
	n = is_power_of_2(32);
	printf("return : %d" , n);
	
	return 0;
}
