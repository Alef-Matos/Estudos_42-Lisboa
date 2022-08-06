/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:13:45 by almatos           #+#    #+#             */
/*   Updated: 2022/08/06 16:53:26 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0' && c != *s)
    {
      s++;
      if (c == *s)
        return ((char *)s);
    }
    return (0);
}