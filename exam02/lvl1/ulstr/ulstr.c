/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:05:20 by yessemna          #+#    #+#             */
/*   Updated: 2023/08/31 11:27:55 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int ac , char **av)
{
	int i;
	char c;

	if(ac == 2)
	{
		i = 0;
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				c = av[1][i] - 32;
				write(1,&c,1);
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				c = av[1][i] + 32;
				write(1,&c,1);
			}else
			{
				write(1,&av[1][i],1);
			}
			i++;
		}
	}
	write(1,"\n",1);

}