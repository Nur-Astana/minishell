/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numussan <numussan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:43:23 by numussan          #+#    #+#             */
/*   Updated: 2022/12/02 15:44:25 by numussan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

char	*read_cmd(char *buf)
{
	int		buflen;
	char	*tmp;

	get_next_line(0, &buf);
	buflen = ft_strlen(buf);
	while (buflen > 1 && buf[buflen - 1] == '\\')
	{
		buf[buflen - 1] = '\n';
		buf[buflen] = '\0';
		print_prompt2();
		tmp = buf;
		get_next_line(0, &buf);
		buf = ft_strjoin(tmp, buf);
		buflen = ft_strlen(buf);
	}
	return (buf);
}

int     main()
{
	char    *cmd;

	cmd = NULL;
	while (1)
	{
		print_prompt1();
		cmd = read_cmd(cmd);
		if (!cmd)
			exit(EXIT_SUCCESS);
		if (cmd[0] == '\0' || strcmp(cmd, "\n") == 0)
		{
			free(cmd);
			continue;
		}
		if (strcmp(cmd, "exit") == 0)
		{
			free(cmd);
			break ;
		}
		write(1, cmd, ft_strlen(cmd));
		write(1, "\n", 1);
		free(cmd);
	}
	exit(EXIT_SUCCESS);
}
