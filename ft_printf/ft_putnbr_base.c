/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:12:36 by mben-mah          #+#    #+#             */
/*   Updated: 2024/11/18 14:30:55 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_base(int  n,int   base,char   *digits)
{
    int count;

    count = 0;
    if(n == 0)
    {
        count += ft_putchar('0');
        return (count);
    }
    if(n <0 && base == 10)
    {
        count += ft_putchar('-');
        n = -n;
    }
    if(n >= base)
    {
        count += ft_putnbr_base(n / base,base,digits);
    }
    count += ft_putchar(digits[n % base]);
    return (count);
}