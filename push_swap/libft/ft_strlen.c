/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:06:49 by pviegas           #+#    #+#             */
/*   Updated: 2023/06/30 16:17:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Calcula o comprimento de uma string.
 *
 * A função ft_strlen calcula o comprimento da string 'str', excluindo o caractere nul.
 *
 * @param str A string para a qual o comprimento será calculado.
 * @return O comprimento da string 'str'.
 */

#include "libft.h"

// calculates the length of a string
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
