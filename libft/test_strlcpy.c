/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:56:00 by almatos           #+#    #+#             */
/*   Updated: 2022/08/09 23:51:22 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
    char dst[5];
    char src[] = "Alef";
    int tamanho;
    int numero;

    numero = 4;
    printf("\nEsta função trabalha com String verdadeira, ou seja conta o caracter vazio no final da string\n\n");
//printf("Sorce: %s \nResultado do Destino antes da função: %s\n", src, dst);
    tamanho = ft_strlcpy(dst, src, numero);
    printf("Resultado do Destino depois da função incluindo o algoritimo vazio: %s\n", dst);
    printf("Tamanho do Sorce excluindo o algoritimo vazio: %d\n\n", tamanho);
}