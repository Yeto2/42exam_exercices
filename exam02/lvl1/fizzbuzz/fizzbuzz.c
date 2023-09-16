/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:11:40 by yessemna          #+#    #+#             */
/*   Updated: 2023/08/30 12:17:32 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_printnbr(int nbr)
{
	if(nbr > 9)
		ft_printnbr(nbr / 10);
	nbr = nbr % 10 + '0';
	write(1,&nbr,1);
}

int main()
{
	int nbr;
	
	nbr = 1;
	while(nbr <= 100)
	{
		if(nbr % 3 == 0 && nbr % 5 == 0)
			write(1,"fizzbuzz",8);
		else if(nbr % 3 == 0)
			write(1,"fizz",4);
		else if(nbr % 5 == 0)
			write(1,"buzz",4);
		else
			ft_printnbr(nbr);
		write(1,"\n",1);
		nbr++;
	}
	return 0;
}
