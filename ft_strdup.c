/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 13:02:27 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/12 20:45:12 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char		*d1;
	size_t		i;
	size_t		len;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	d1 = malloc(len * sizeof(char) + 1);
	if (d1 == 0)
		return (0);
	while (s1[i])
	{
		d1[i] = s1[i];
		i++;
	}
	d1[i] = 0;
	return (d1);
}
