/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:42:07 by fballest          #+#    #+#             */
/*   Updated: 2021/03/15 13:50:57 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

/*
** Useful macros
*/
# define STRLEN(x)			printf("\nCADENA `%s`\n - FT_STRLEN = %d\n - STRLEN    = %d\n -----------------------\n", x, ft_strlen(x), (int)strlen(x));
# define STRCMP(a, b)		printf("`%s`:`%s` = %d (%d)\n", a, b, ft_strcmp(a, b), strcmp(a, b));
# define WRITE(s, x)		printf("^%ld (`%s`:%ld)\n", ft_write(STDOUT_FILENO, s, x), s, x);
# define READ(b, x)			r = ft_read(STDIN_FILENO, buffer, x); printf("`%s`:%ld\n", buffer, r);
# define DUP(s)				tmp = ft_strdup(s); printf("`%s` (`%s`)\n", tmp, s); free(tmp); tmp = NULL;
# define ANSI_COLOR_RED     "\x1b[31m"
# define ANSI_COLOR_GREEN   "\x1b[32m"
# define ANSI_COLOR_YELLOW  "\x1b[33m"
# define ANSI_COLOR_BLUE    "\x1b[34m"
# define ANSI_COLOR_MAGENTA "\x1b[35m"
# define ANSI_COLOR_CYAN    "\x1b[36m"
# define ANSI_COLOR_RESET   "\x1b[0m"

/*
** Start !
*/
int		main()
{
	int		i;
	long	r;
	char	buffer[100];
	char	*lstr;

	lstr = "El juego, en su forma más tradicional, consiste en tres postes verticales. En uno de los postes se apila un número indeterminado de discos perforados por su centro (elaborados de madera), que determinará la complejidad de la solución. Por regla general se consideran siete discos. Los discos se apilan sobre uno de los postes en tamaño decreciente de abajo arriba. No hay dos discos iguales, y todos ellos están apilados de mayor a menor radio -desde la base del poste hacia arriba- en uno de los postes, quedando los otros dos postes vacíos. El juego consiste en pasar todos los discos desde el poste ocupado (es decir, el que posee la torre) a uno de los otros postes vacíos. Para realizar este objetivo, es necesario seguir tres simples reglas";
	// char	*tmp;
	// char	*tmp2;

	r = 0;
	i = 0;
	while (i < 100)
		buffer[i++] = 0;
	printf(ANSI_COLOR_BLUE	"\n----------------------------\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"TEST DEL FT_STRLEN VS STRLEN\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"----------------------------\n" ANSI_COLOR_RESET);
	STRLEN("")
	if (ft_strlen("") != (int)strlen(""))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRLEN("hola")
	if (ft_strlen("hola") != (int)strlen("hola"))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRLEN("hola mundo")
	if (ft_strlen("hola mundo") != (int)strlen("hola mundo"))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRLEN("hola mundo cruel, donde me estará esperando, ya es la hora de comer");
	if (ft_strlen("hola mundo cruel, donde me estará esperando, ya es la hora de comer") != (int)strlen("hola mundo cruel, donde me estará esperando, ya es la hora de comer"))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRLEN(lstr)
	if (ft_strlen(lstr) != (int)strlen(lstr))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRLEN("42")
	if (ft_strlen("42") != (int)strlen("42"))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRLEN("1");
	if (ft_strlen("1") != (int)strlen("1"))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_YELLOW "\n----------\nFINALIZADO\n----------\n" ANSI_COLOR_RESET);

	// printf("\n--strcmp\n");
	// STRCMP("", "")
	// STRCMP("toto", "toto")
	// STRCMP("", "toto")
	// STRCMP("toto", "")
	// STRCMP("toto", "totobar")
	// printf("`%s`:`%s` = %d\n", "TOTO", NULL, ft_strcmp("TOTO", NULL));
	// printf("`%s`:`%s` = %d\n", NULL, "TOTO", ft_strcmp(NULL, "TOTO"));
	// printf("`%s`:`%s` = %d\n", NULL, NULL, ft_strcmp(NULL, NULL));
	// printf("-done\n");

	// printf("\n--strcpy\n");
	// printf("`%s` (`toto`)\n", ft_strcpy(buffer, "toto"));
	// printf("`%s` (empty)\n", ft_strcpy(buffer, ""));
	// printf("`%s` (`long message`)\n", ft_strcpy(buffer, "long message"));
	// printf("`%s` (NULL > not modified)\n", ft_strcpy(buffer, NULL));
	// printf("-done\n");

	// printf("\n--write\n");
	// WRITE("toto", 4L)
	// WRITE("totototo", 4L)
	// WRITE("totototo", 8L)
	// WRITE("toto", 2L)
	// printf("-done\n");

	// printf("\n--read (Makefile)\n");
	// READ(buffer, 50)
	// READ(buffer, 25)
	// READ(buffer, 4)
	// READ(buffer, 26)
	// READ(buffer, 14)
	// READ(buffer, 0)
	// printf("-done\n");

	// printf("\n--ft_strdup\n");
	// tmp2 = ft_strdup("toto");
	// DUP(tmp2)
	// free(tmp2);
	// DUP("totobar")
	// DUP("long message")
	// DUP("")
	// DUP(NULL)
	// printf("-done\n");

	// return (0);
}