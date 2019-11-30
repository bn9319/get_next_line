/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/21 13:43:58 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/30 23:28:22 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		get_next_line(int fd, char **line)
{
	static int		ret;
	static int		i;
	static char		buf[BUFFER_SIZE + 1];

	ret = read(fd, buf, BUFFER_SIZE);
//	printf("%d\n", ret);
	line = malloc(ret + 1);
	*line = buf;
	printf("%s\n", buf);
//	i = 0;
	while (i < ret)
	{
		if (buf[i] == '\n')
		{
//			printf("%d\n", i);
//			**(line + i) = '\0';
			ft_bzero(*line, i);
			free(line);
			return (1);
		}
		i++;
	}
//	printf("%d\n", ret);
	return (0);
}
