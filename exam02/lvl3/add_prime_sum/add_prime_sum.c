/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:26:44 by yessemna          #+#    #+#             */
/*   Updated: 2023/09/07 18:48:28 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int is_prime(int nbr)
{
	int i = 2;
	int mot;

	mot = nbr / 2;
	if(nbr == 0 || nbr == 1 || nbr <0)
		return (0);
	while(i <= mot)
	{
		if(nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int matoi(char *str)
{
	int i;
	int h = 0;

	i = 0;
	while(str[i])
	{
		h = (h * 10) + str[i] - '0';
	}
	return (h);
}

void putnbr(int nbr)
{
	char c;
	if(nbr > 9)
		putnbr(nbr / 10);
	c = nbr % 10+'0';
	write(1,&c,1);
}

int main(int ac , char ** av)
{
	int tab[100];
	int nbr;
	int start;
	int i;

	if(ac == 2)
	{
		i = 0;
		start = 2;
		nbr = matoi(av[1]);

		while(start <= nbr)
		{
			if(is_prime(start))
				tab[i] = start;
			i++;
			start++;
		}
		int j = 0;
		int sum = 0;
		while(j <= i)
		{
			sum += tab[j];
			j++;
		}
		putnbr(sum);
	}
	write(1,"0\n",2);
}
