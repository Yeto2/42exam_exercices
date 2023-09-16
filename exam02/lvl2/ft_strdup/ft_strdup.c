/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 22:51:28 by yessemna          #+#    #+#             */
/*   Updated: 2023/08/31 23:17:12 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *txt)
{
	int j;
	j = 0;
	while(txt[j])
	{
		j++;
	}
	return (j);
}

char    *ft_strdup(char *src)
{
	int i;
	i = 0;
	char *str;
	str = (char*)malloc(ft_strlen(src) * sizeof(char));

	if(!str)
	{
		return NULL;
	}

	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char txt[] = "yassine is 3yiit wlh";
	char *dest;
	   dest	= ft_strdup(txt);
	printf("%s", dest);
}





