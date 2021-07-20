/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 13:32:57 by msantos-          #+#    #+#             */
/*   Updated: 2021/07/20 19:53:30 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
#define PHILO_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <strings.h>

typedef struct s_philo{
	int				id;
	int				status; // 0 eating, 1 sleeping, 2 thinking
	int				time_to_die;
	int				r_fork; // 0 if not used, 1 if used
	int				l_fork;
}				t_philo;

typedef struct s_info{
	int			num_philos;
	
	int			time_to_eat;
	int			time_to_sleep;
	int			num_of_meals;
	t_philo		*philosophers;
}				t_info;

size_t		ft_strlen(const char *s);
void		ft_putstr_fd(char *s, int fd);
int			str_error(char *s);
int			ft_atoi(const char *str);
int			str_isnumber(char *str);
int			arg_validation(char **argv);
void		arg_save(t_info *info,int argc, char **argv);

#endif