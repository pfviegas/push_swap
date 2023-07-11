/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:12:39 by pviegas           #+#    #+#             */
/*   Updated: 2023/04/13 14:12:39 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Converte uma string para um valor inteiro.
 *
 * A função `ft_atoi` converte a string `str` em um valor inteiro.
 *
 * @param str A string a ser convertida.
 * @return O valor inteiro convertido.
 */
#include "libft.h"

static void	sig_check(int *sign, const char **str)
{
	if (**str == '-')
	{
		*sign = -1;
		(*str)++;
	}
	else if (**str == '+')
		(*str)++;
}

// modificado para push_swap
int	ft_atoi(const char *str)
{
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sig_check(&sign, &str);
	if (!*str)
		error(1);
	while (*str && ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	if (*str && !ft_isdigit(*str))
		error(1);
	if ((sign * res) > 2147483647 || (sign * res) < -2147483648)
		error(2);
	return (sign * res);
}
