
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 21:54:14 by yessemna          #+#    #+#             */
/*   Updated: 2023/08/31 22:07:12 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
int i;

i = 0;

	while(s1[i] && s2[i])
	{
		if(s1[i] != s2[i] )
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char str1[] = "yassine";
	char str2[] = "yasksine";
	int res = ft_strcmp(str1,str2);

	printf("--->  %d" , res);
	
	return 0;
}
