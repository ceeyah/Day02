/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simtshal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:29:33 by simtshal          #+#    #+#             */
/*   Updated: 2020/07/09 13:40:32 by simtshal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char v) 

void ft_print_reverse_alphabet(void)
{
	int   v;
	v = 'z';
	while (v >='a')
	{ 
		ft_putchar(v);
		--v;

	}
}

 

