/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:19:24 by victoirevau       #+#    #+#             */
/*   Updated: 2024/02/21 15:48:33 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include "../printf/ft_printf.h"
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/wait.h>

typedef struct s_cmd
{
	char			*cmd;
	char			**args;
	struct s_cmd	*prev;
	struct s_cmd	*next;
}					t_cmd;

typedef struct s_list
{
	size_t	len;
	t_cmd	*head;
}			t_list;

typedef struct s_data
{
	char	**env;
	int		ac;
	char	*path;
	char	**splitted_paths;
	int		fds[2];
	int		pipe_ends[2];
	int		id1;
	int		id2;
	char	*infile;
	char	*outfile;
	int		is_here_doc;
	int		nb_of_cmds;
	t_list	*cmd_list;
}		t_data;

/* To get rid of */
void	print_list(t_cmd **head);

/* Free function */
void	free_split(char **tab);
void	free_all(t_data *data);

/* Error management */
void	ft_error(int nb);
void	ft_exit(t_data *data, char *file, int nb_error);

/* Execution functions */
void	ft_exec(t_data *data, t_cmd *cmd);

/* Processes */
void	get_exec_paths(t_data *data, char **env);
void	check_if_dir(t_data *data, char *file);
void	check_file_for_fd(t_data *data, int i, char *file);
void	exec_command(t_data *data, int i, t_cmd *cmd_node);
void	child_process(t_data *data, int i);

/* Initializing */
void	init_pipex(char **av, char **envp, t_data *data, int ac);
// int		get_nb_cmds(int ac, char **av);

/* Command list utils*/
t_cmd	*find_last(t_cmd **head);
void	create_list(t_data *data);
t_cmd	*init_cmd(t_cmd *cmd, t_data *data, char **av, int ac);
void	fill_cmd_list(t_data *data, char **av);

/* Parsing */
void	ft_parsing(int ac, char **av, t_data *data);

/* Main */
int		main(int ac, char **av, char **envp);

#endif