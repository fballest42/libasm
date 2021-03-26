/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:42:07 by fballest          #+#    #+#             */
/*   Updated: 2021/03/17 13:25:27 by fballest         ###   ########.fr       */
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
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;
	char	*lstr;
	char	*s6;
	char	*s7;
	char	*s8;

	s1 = "";
	s2 = "F";
	s3 = "Fer";
	s4 = "Fernando Ballesteros !!!";
	s5 = "Hola mundo cruel, donde me estará esperando, ya es la hora de comer";
	lstr = "El juego, en su forma más tradicional, consiste en tres postes verticales. En uno de los postes se apila un número indeterminado de discos perforados por su centro (elaborados de madera), que determinará la complejidad de la solución. Por regla general se consideran siete discos. Los discos se apilan sobre uno de los postes en tamaño decreciente de abajo arriba. No hay dos discos iguales, y todos ellos están apilados de mayor a menor radio -desde la base del poste hacia arriba- en uno de los postes, quedando los otros dos postes vacíos. El juego consiste en pasar todos los discos desde el poste ocupado (es decir, el que posee la torre) a uno de los otros postes vacíos. Para realizar este objetivo, es necesario seguir tres simples reglas";
	s6 = "1";
	s7 = "42";
	s8 = "1984928479182374261367012876";
	// char	*tmp;
	// char	*tmp2;

	r = 0;
	i = 0;
	while (i < 100)
		buffer[i++] = 0;
	printf(ANSI_COLOR_BLUE	"\n----------------------------\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"TEST DEL FT_STRLEN VS STRLEN\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"----------------------------\n" ANSI_COLOR_RESET);
	STRLEN(s1)
	if (ft_strlen(s1) != (int)strlen(s1))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRLEN(s2)
	if (ft_strlen(s2) != (int)strlen(s2))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRLEN(s3)
	if (ft_strlen(s3) != (int)strlen(s3))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRLEN(s4)
	if (ft_strlen(s4) != (int)strlen(s4))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRLEN(s5);
	if (ft_strlen(s5) != (int)strlen(s5))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRLEN(lstr)
	if (ft_strlen(lstr) != (int)strlen(lstr))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRLEN(s6)
	if (ft_strlen(s6) != (int)strlen(s6))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRLEN(s7);
	if (ft_strlen(s7) != (int)strlen(s7))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRLEN(s8);
	if (ft_strlen(s8) != (int)strlen(s8))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_YELLOW "\n----------------------\nFINALIZADO TEST STRLEN\n----------------------\n\n" ANSI_COLOR_RESET);


	printf(ANSI_COLOR_BLUE	"\n----------------------------\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"TEST DEL FT_STRCMP VS STRCMP\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"----------------------------\n" ANSI_COLOR_RESET);
	printf("\n--strcmp\n");
	STRCMP(s1, s1)
	if (ft_strcmp(s1, s1) != (int)strcmp(s1, s1))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRCMP(s2, s2)
	if (ft_strcmp(s2, s2) != (int)strcmp(s2, s2))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRCMP(s3, s3)
	if (ft_strcmp(s3, s3) != (int)strcmp(s3, s3))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRCMP(s4, s4)
	if (ft_strcmp(s4, s4) != (int)strcmp(s4, s4))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRCMP(s5, s5)
	if (ft_strcmp(s5, s5) != (int)strcmp(s5, s5))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRCMP(s6, s6)
	if (ft_strcmp(s6, s6) != (int)strcmp(s6, s6))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRCMP(s7, s7)
	if (ft_strcmp(s7, s7) != (int)strcmp(s7, s7))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRCMP(s8, s8)
	if (ft_strcmp(s8, s8) != (int)strcmp(s8, s8))
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	STRCMP("Holita soy yo", "Holita soy yó")
	if (ft_strcmp("Holita soy yo", "Holita soy yó") == (int)strcmp("Holita soy yo", "Holita soy yó"))
		printf(ANSI_COLOR_RED	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	STRCMP("Hola", "Höla")
	if (ft_strcmp("Hola", "Höla") == (int)strcmp("Hola", "Höla"))
		printf(ANSI_COLOR_RED	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	printf("`%s`:`%s` = %d\n", "TOTO", NULL, ft_strcmp("TOTO", NULL));
	printf("`%s`:`%s` = %d\n", NULL, "TOTO", ft_strcmp(NULL, "TOTO"));
	printf("`%s`:`%s` = %d\n", NULL, NULL, ft_strcmp(NULL, NULL));
	printf("-done\n");
	printf(ANSI_COLOR_YELLOW "\n----------------------\nFINALIZADO TEST STRCMP\n----------------------\n\n" ANSI_COLOR_RESET);

	printf(ANSI_COLOR_BLUE	"\n----------------------------\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"TEST DEL FT_STRCPY VS STRCPY\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"----------------------------\n" ANSI_COLOR_RESET);
	// printf("\n--strcpy\n");
	// printf("`%s` (`toto`)\n", ft_strcpy(buffer, "toto"));
	// printf("`%s` (empty)\n", ft_strcpy(buffer, ""));
	// printf("`%s` (`long message`)\n", ft_strcpy(buffer, "long message"));
	// printf("`%s` (NULL > not modified)\n", ft_strcpy(buffer, NULL));
	// printf("-done\n");
	printf(ANSI_COLOR_YELLOW "\n----------------------\nFINALIZADO TEST STRCPY\n----------------------\n\n" ANSI_COLOR_RESET);

	printf(ANSI_COLOR_BLUE	"\n--------------------------\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"TEST DEL FT_WRITE VS WRITE\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"--------------------------\n" ANSI_COLOR_RESET);
	// printf("\n--write\n");
	// WRITE("toto", 4L)
	// WRITE("totototo", 4L)
	// WRITE("totototo", 8L)
	// WRITE("toto", 2L)
	// printf("-done\n");
	printf(ANSI_COLOR_YELLOW "\n---------------------\nFINALIZADO TEST WRITE\n---------------------\n\n" ANSI_COLOR_RESET);

	printf(ANSI_COLOR_BLUE	"\n------------------------\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"TEST DEL FT_READ VS READ\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"------------------------\n" ANSI_COLOR_RESET);
	// printf("\n--read (Makefile)\n");
	// READ(buffer, 50)
	// READ(buffer, 25)
	// READ(buffer, 4)
	// READ(buffer, 26)
	// READ(buffer, 14)
	// READ(buffer, 0)
	// printf("-done\n");
	printf(ANSI_COLOR_YELLOW "\n--------------------\nFINALIZADO TEST READ\n--------------------\n\n" ANSI_COLOR_RESET);

	printf(ANSI_COLOR_BLUE	"\n----------------------------\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"TEST DEL FT_STRDUP VS STRDUP\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"----------------------------\n" ANSI_COLOR_RESET);
	// printf("\n--ft_strdup\n");
	// tmp2 = ft_strdup("toto");
	// DUP(tmp2)
	// free(tmp2);
	// DUP("totobar")
	// DUP("long message")
	// DUP("")
	// DUP(NULL)
	// printf("-done\n");
	printf(ANSI_COLOR_YELLOW "\n----------------------\nFINALIZADO TEST STRDUP\n----------------------\n\n" ANSI_COLOR_RESET);

	// return (0);
}