/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_exemplo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:30:00 by almatos           #+#    #+#             */
/*   Updated: 2022/08/05 15:25:24 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_printstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}

int main (int argc, char **argv)
{
    if(argc >= 2)
    {
        int i;

        i = 1;
        while(i < argc)
        {
            ft_printstr(argv[i]);
            if (i < argc - 1)
                write(1, " ", 1);
            else
                write(1, ".\n", 2);        
//  i < argc - 1 ? write(1, " ", 1) : write(1, ".\n", 2);
            i++;
        }
    }
    else
        write(1, "Sem Argumentos\n", 15);
}
