/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typing_robot.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 21:16:51 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/03/30 14:08:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPING_ROBOT_H
# define TYPING_ROBOT_H

# include "libft.h"
# include "dirent.h"

# define ASCII_LB	33
# define ASCII_UB	126
# define STR_LEN_LB	10
# define STR_LEN_UB	80
# define LIMIT		80

# define EPI1		"--.--          o              ,---.     |         |"
# define EPI2		"  |  ,   .,---..,---.,---.    |---',---.|---.,---.|---"
# define EPI3		"  |  |   ||   |||   ||   |    |  \\ |   ||   ||   ||"
# define EPI4		"  `  `---||---'``   '`---|    `   ``---'`---'`---'`---'"
# define EPI5		"     `---'|          `---'     As precise as a robot."

typedef struct	s_stat
{
	int			chr;
	int			sec;
	int			typo;
	int			round;
}				t_stat;

void			reset_randint(int lower, int upper);

void			string_mode(void);
char			*str_generate(void);
t_bool			str_report(char *output, char *input, int len, int sec);
void			str_summary(void);

void			alg_update(void);
int				alg_select(char *code[]);
void			algorithm_mode(void);

void			interface(void);

#endif
