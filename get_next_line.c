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
char *ft_strjoin(char *s1, char *s2);

int		get_next_line(int fd, char **line)
{
	static int		ret;
	static int		i;
	static char		buf[BUFFER_SIZE + 1];
	static int              fc;
	char                tmp[1];

       	tmp[0] = 'a';
	 while (tmp[0] != '\n')
	 {
	  ret = read(fd, tmp, 1);
	  if (ret == 0)
	    return (0);
	  if (tmp[0] == '\n')
	  {
	    buf[i] = 0;
	    *line = strdup(buf);
	    bzero(buf, i);
	    i = 0;
	    printf("%s\n", *line);
	    return (1);
	  }
	  	  buf[i] = tmp[0];
	  	  i++;
	 }
	 	 buf[i] = 0;
	 	 *line = buf;
	 	printf("%s\n", *line);
	return (-1);
}
