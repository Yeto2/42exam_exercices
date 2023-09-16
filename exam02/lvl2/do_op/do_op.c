/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:34:20 by yessemna          #+#    #+#             */
/*   Updated: 2023/08/31 19:11:02 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int ac , char **av)
{
	int res;
	int fnum;
	int snum;

	fnum = atoi(av[1]);
	snum = atoi(av[3]);

	if(ac == 4)
	{
		if(av[2][0] == '+')
		{
			res = fnum + snum;
			printf("%d\n" , res);
		}else if(av[2][0] == '-')
		{
			res = fnum - snum;
			printf("%d\n" , res);
		}else if(av[2][0] == '*')
		{
			res = fnum * snum;
			printf("%d\n" , res);
		}else if(av[2][0] == '/')
		{
			res = fnum / snum;
			printf("%d\n" , res);	
		}else if(av[2][0] == '%')
		{
			res = fnum % snum;
			printf("%d\n" , res);
		}
	}else
		write(1,"\n",1);
}

