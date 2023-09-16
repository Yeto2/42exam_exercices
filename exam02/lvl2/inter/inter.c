/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:03:03 by yessemna          #+#    #+#             */
/*   Updated: 2023/09/01 11:33:47 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void print_char(char *s1 , char *s2)
{
	int tab[256] = {0};
	int i;

	i = 0;
	while(s2[i])
	{
		tab[s2[i]] = 1;
		i++;
	}
	i = 0;
	while(s1[i])
	{
		if(tab[s1[i]] == 1)
		{
			write(1,&s1[i],1);
			tab[s1[i]] = 2;
		}
		i++;
	}

}

int main(int ac , char **av)
{
	if( ac == 3)
	{
		print_char(av[1],av[2]);
	}
	write(1,"\n",1);
}
