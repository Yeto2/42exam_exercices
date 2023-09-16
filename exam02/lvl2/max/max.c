/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 22:34:01 by yessemna          #+#    #+#             */
/*   Updated: 2023/09/05 21:55:58 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int i;
	int max;

	i = 0;
	max = tab[0];
	while(i < len -1)
	{
		if(max < tab[i + 1])
			max = tab [i + 1];
		i++;
	}
	return (max);
}
int main()
{
	int tab[] = {5,7,85,5,2,75};
	int res = max(tab , 6);
	printf("res is  : %d" , res);
	return 0;
}
