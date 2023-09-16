/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:02:50 by yessemna          #+#    #+#             */
/*   Updated: 2023/08/31 11:01:49 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int str_len(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}
int main(int ac , char **av)
{
	int i;
	int flen = str_len(av[2]);
	int slen = str_len(av[3]);
	if(ac == 4)
	{
	if(slen == 1 && flen == 1){	
		i = 0;
		while(av[1][i])
		{
			if(av[1][i] == av[2][0])
			{
				write(1,&av[3][0],1);
			}else
			{
				write(1,&av[1][i],1);
			}
		
			i++;
		}
	}
	}
	write(1,"\n",1);
}
