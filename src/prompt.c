/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numussan <numussan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:35:34 by numussan          #+#    #+#             */
/*   Updated: 2022/12/01 21:44:46 by numussan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void    print_prompt1(void)
{
    fprintf(stderr, "$ ");
}

void    print_prompt2(void)
{
    fprintf(stderr, "> ");
}
