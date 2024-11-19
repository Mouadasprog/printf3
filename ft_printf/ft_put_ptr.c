/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:16:08 by mben-mah          #+#    #+#             */
/*   Updated: 2024/11/18 14:30:28 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_put_pointer(void *ptr)
{
    unsigned long   address;
    int count;
    char    *hex_digits;

    address = (unsigned long)ptr;
    count = 0;
    hex_digits = "0123456789abcdef";

    if(address == 0)
    {
        count += ft_putstr("0x0");
        return (count);
    }
    
    count += ft_putstr("0x");
    count += ft_putnbr_base(address,16,hex_digits);

    return (count);
}