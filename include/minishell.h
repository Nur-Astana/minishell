/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numussan <numussan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:43:30 by numussan          #+#    #+#             */
/*   Updated: 2022/12/01 21:43:38 by numussan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHELL_H
# define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

void    print_prompt1(void);
void    print_prompt2(void);
char	*read_cmd(char *buf);

int		get_next_line(int fd, char **line);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
void	ft_putchar_fd(char c, int fd);


#endif
