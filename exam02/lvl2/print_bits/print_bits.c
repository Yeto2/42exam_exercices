/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:04:29 by yessemna          #+#    #+#             */
/*   Updated: 2023/09/07 17:18:38 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	print_bits(unsigned char octet)
{
	int dev = 128;
	int oct = octet;
	
	while(dev)
	{
		if(dev <= oct)
		{
			write(1,"1",1);
			oct = oct % dev;
		}
		else
			write(1,"0",1);
		dev /= 2;
	}
}

int main()
{
	print_bits(9);
	return 0;
}
