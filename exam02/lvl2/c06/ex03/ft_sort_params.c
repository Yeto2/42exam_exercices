/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:37:25 by yessemna          #+#    #+#             */
/*   Updated: 2023/09/05 10:40:35 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	str_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

//char	put_str(char **str, int size)
//{
	//int	i;
	//int	j;

	//j = 1;
	//while (j < size)
	//{
		//i = 0;
		//while (str[j][i])
		//{
			//write(1, &str[j][i], 1);
			//i++;
		//}
		//write(1, "\n", 1);
		//j++;
	//}
	//return (0);
//}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*swap;

	i = 0;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (str_cmp(av[i], av[j]) > 0)
			{
				swap = av[i];
				av[i] = av[j];
				av[j] = swap;
			}
			j++;
		}
		i++;
	}
	//put_str(av, ac);
}
