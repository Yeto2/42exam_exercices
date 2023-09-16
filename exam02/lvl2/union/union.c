/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:32:23 by yessemna          #+#    #+#             */
/*   Updated: 2023/09/07 13:18:01 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int ac , char **av)
{
	int arr[256] = {0};
	int i;
	int j;

	if(ac == 3)
	{
		i = 0;
		j = 1;
		while(j < 3)
		{
			while(av[j][i])
			{
				arr[(int)av[j][i]] = 1;
				i++;
			}
			i = 0;
			j++;
		}
		i = 0;
		j = 1;
		while(j < 3)
		{
			while(av[j][i])
			{
				if(arr[(int)av[j][i]] == 1)
				{
					write(1,&av[j][i], 1);
					arr[(int)av[j][i]] = 2;
				}
				i++;
			}
			i = 0;
			j++;
		}
	}
	write(1,"\n",1);
}

