/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simtshal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:20:01 by simtshal          #+#    #+#             */
/*   Updated: 2020/07/10 17:26:41 by simtshal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void ft_putchar (char c);

void ft_print_comb2(void)
{ 
	int a;
	int b;
	int c;
	int d;
	a='0';
	b='0';
	c='0';
	d='1';
	while (a<='9')
	{ 	
		while(b <='9')

		{
	
			while(c <='9')
			{
				while (d<='9')
		 	   {
					write(1,&a,1);
					write(1,&b,1);
					write(1, " ", 1);
					write(1,&c,1);
					write(1,&d,1);
					write(1,", ",2);
				  		d++;
						
			   }
				d=c+1;

				c++;
				d='0';
			}
			c=b+1;
			b++;
			c='0';
		}
		b=a+1;
		a++;
		b='0';
	}
}	
int main(void)
{ 	
	ft_print_comb2();
	return(0);
}
