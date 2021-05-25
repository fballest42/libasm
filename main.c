/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:42:07 by fballest          #+#    #+#             */
/*   Updated: 2021/05/25 13:50:08 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

/*
** Useful macros
*/
# define STRLEN(x)			printf("\nCADENA `%s`\n - FT_STRLEN = %d\n - STRLEN    = %d\n -----------------------\n", x, ft_strlen(x), (int)strlen(x));
# define STRCMP(a, b)		printf("`%s`:`%s` = %d (%d)\n", a, b, ft_strcmp(a, b), strcmp(a, b));
# define WRITE(fd, s, x)	printf(":%ld ----> `%s`:%ld\n", ft_write(fd, s, x), s, x);
# define READ(fd, b, x)		r = ft_read(fd, b, x); printf("`%s`:%ld\n", b, r);
# define DUP(s)				tmp = ft_strdup(s); printf("%s ----> `%s`\n\n", tmp, s);
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
	int		a;
	int		b;
	long	r;
	char	buffer[1351];
	char	buffer2[1351];
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;
	char	*lstr;
	char	*s6;
	char	*s7;
	char	*s8;
	char	*tmp1;
	char	*tmp2;

	a = 0;
	b = 0;
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
	printf("-done\n");
	printf(ANSI_COLOR_YELLOW "\n----------------------\nFINALIZADO TEST STRCMP\n----------------------\n\n" ANSI_COLOR_RESET);

	printf(ANSI_COLOR_BLUE	"\n----------------------------\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"TEST DEL FT_STRCPY VS STRCPY\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"----------------------------\n" ANSI_COLOR_RESET);
	buffer[0] = '\0';
	printf("`%s` debe devolver [`%s`]\n", s1, ft_strcpy(buffer, s1));
	if (strcmp (s1, buffer) == 0)
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);

	buffer[0] = '\0';
	printf("`%s` --> devuelve --> [`%s`]\n", s2, ft_strcpy(buffer, s2));
	if (strcmp (s2, buffer) == 0)
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	buffer[0] = '\0';
	printf("`%s` --> devuelve --> [`%s`]\n", s3, ft_strcpy(buffer, s3));
	if (strcmp (s3, buffer) == 0)
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	buffer[0] = '\0';
	printf("`%s` --> devuelve --> [`%s`]\n", s4, ft_strcpy(buffer, s4));
	if (strcmp (s4, buffer) == 0)
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	buffer[0] = '\0';
	printf("`%s` --> devuelve --> [`%s`]\n", s5, ft_strcpy(buffer, s5));
	if (strcmp (s5, buffer) == 0)
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	buffer[0] = '\0';
	printf("`%s` --> devuelve --> [`%s`]\n", s6, ft_strcpy(buffer, s6));
	if (strcmp (s6, buffer) == 0)
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	buffer[0] = '\0';
	printf("`%s` --> devuelve --> [`%s`]\n", s7, ft_strcpy(buffer, s7));
	if (strcmp (s7, buffer) == 0)
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	buffer[0] = '\0';
	printf("`%s` --> devuelve --> [`%s`]\n", s8, ft_strcpy(buffer, s8));
	if (strcmp (s8, buffer) == 0)
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);	
	buffer[0] = '\0';
	printf("`%s` --> devuelve --> [`%s`]\n", lstr, ft_strcpy(buffer, lstr));	
	if (strcmp (lstr, buffer) == 0)
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	buffer[0] = '\0';
	printf(ANSI_COLOR_YELLOW "\n----------------------\nFINALIZADO TEST STRCPY\n----------------------\n\n" ANSI_COLOR_RESET);

	printf(ANSI_COLOR_BLUE	"\n--------------------------\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"TEST DEL FT_WRITE VS WRITE\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"--------------------------\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_RESET "\n");
	int fd;
	fd = open ("escrito.txt", O_RDWR | O_CREAT, S_IRWXG | S_IRWXU | S_IRWXO);
	b = (int)write(0, s2, (long)ft_strlen(s2));
	WRITE(fd, s2, (long)ft_strlen(s2))
	if (b == (int)ft_strlen(s2))
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	write(fd, "\n", 1);
	printf(ANSI_COLOR_RESET "\n");
	b = (int)write(0, s3, (long)ft_strlen(s3));
	WRITE(fd, s3, (long)ft_strlen(s3))
	if (b == ft_strlen(s3))
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	write(fd, "\n", 1);
	printf(ANSI_COLOR_RESET "\n");
	b = (int)write(0, s4, (long)ft_strlen(s4));
	WRITE(fd, s4, (long)ft_strlen(s4))
	if (b == ft_strlen(s4))
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	write(fd, "\n", 1);
	printf(ANSI_COLOR_RESET "\n");
	b = (int)write(0, s5, (long)ft_strlen(s5));
	WRITE(fd, s5, (long)ft_strlen(s5))
	if (b == ft_strlen(s5))
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	write(fd, "\n", 1);
	printf(ANSI_COLOR_RESET "\n");
	b = (int)write(0, lstr, (long)ft_strlen(lstr));
	WRITE(fd, lstr, (long)ft_strlen(lstr))
	if (b == ft_strlen(lstr))
		printf(ANSI_COLOR_GREEN	"TEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED	"TEST FALLIDO\n" ANSI_COLOR_RESET);
	write(fd, "\n", 1);
	printf(ANSI_COLOR_YELLOW "\n---------------------\nFINALIZADO TEST WRITE\n---------------------\n\n" ANSI_COLOR_RESET);

	printf(ANSI_COLOR_BLUE	"\n------------------------\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"TEST DEL FT_READ VS READ\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"------------------------\n" ANSI_COLOR_RESET);
	bzero(buffer, 1350);
	bzero(buffer2, 1350);
	fd = open("texto.txt", O_RDONLY);
	if (fd <= 0)
	{
		printf("ERROR DE APERTURA DEL ARCHIVO");
		exit (-1);
	}
	READ(fd, buffer, 10)
	close (fd);
	fd = open("texto.txt", O_RDONLY);
	if (fd <= 0)
	{
		printf("ERROR DE APERTURA DEL ARCHIVO");
		exit (-1);
	}
	read(fd, buffer2, 10);
	printf(" ------>\n%s :%lu\n", buffer2, strlen(buffer2));
	if (ft_strcmp(buffer, buffer2) != 0)
		printf(ANSI_COLOR_RED "\nERROR\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN "\nTEST CORRECTO\n" ANSI_COLOR_RESET);
	close (fd);
	bzero(buffer, 1350);
	bzero(buffer2, 1350);
	fd = open("texto.txt", O_RDONLY);
	if (fd <= 0)
	{
		printf("ERROR DE APERTURA DEL ARCHIVO");
		exit (-1);
	}
	READ(fd, buffer, 25)
	close (fd);
	fd = open("texto.txt", O_RDONLY);
	if (fd <= 0)
	{
		printf("ERROR DE APERTURA DEL ARCHIVO");
		exit (-1);
	}
	read(fd, buffer2, 25);
	printf(" ------>\n%s :%lu\n", buffer2, strlen(buffer2));
	if (ft_strcmp(buffer, buffer2) != 0)
		printf(ANSI_COLOR_RED "\nERROR\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN "\nTEST CORRECTO\n" ANSI_COLOR_RESET);
	close (fd);
	bzero(buffer, 1350);
	bzero(buffer2, 1350);
	fd = open("texto.txt", O_RDONLY);
	if (fd <= 0)
	{
		printf("ERROR DE APERTURA DEL ARCHIVO");
		exit (-1);
	}
	READ(fd, buffer, 51)
	close (fd);
	fd = open("texto.txt", O_RDONLY);
	if (fd <= 0)
	{
		printf("ERROR DE APERTURA DEL ARCHIVO");
		exit (-1);
	}
	read(fd, buffer2, 51);
	printf(" ------>\n%s :%lu\n", buffer2, strlen(buffer2));
	if (ft_strcmp(buffer, buffer2) != 0)
		printf(ANSI_COLOR_RED "\nERROR\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN "\nTEST CORRECTO\n" ANSI_COLOR_RESET);
	close (fd);
	bzero(buffer, 1350);
	bzero(buffer2, 1350);
	fd = open("texto.txt", O_RDONLY);
	if (fd <= 0)
	{
		printf("ERROR DE APERTURA DEL ARCHIVO");
		exit (-1);
	}
	READ(fd, buffer, 250)
	close (fd);
	fd = open("texto.txt", O_RDONLY);
	if (fd <= 0)
	{
		printf("ERROR DE APERTURA DEL ARCHIVO");
		exit (-1);
	}
	read(fd, buffer2, 250);
	printf(" ------>\n%s :%lu\n", buffer2, strlen(buffer2));
	if (ft_strcmp(buffer, buffer2) != 0)
		printf(ANSI_COLOR_RED "\nERROR\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN "\nTEST CORRECTO\n" ANSI_COLOR_RESET);
	close (fd);
	bzero(buffer, 1350);
	bzero(buffer2, 1350);
	fd = open("texto.txt", O_RDONLY);
	if (fd <= 0)
	{
		printf("ERROR DE APERTURA DEL ARCHIVO");
		exit (-1);
	}
	READ(fd, buffer, 500)
	close (fd);
	fd = open("texto.txt", O_RDONLY);
	if (fd <= 0)
	{
		printf("ERROR DE APERTURA DEL ARCHIVO");
		exit (-1);
	}
	read(fd, buffer2, 500);
	printf(" ------>\n%s :%lu\n", buffer2, strlen(buffer2));
	if (ft_strcmp(buffer, buffer2) != 0)
		printf(ANSI_COLOR_RED "\nERROR\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN "\nTEST CORRECTO\n" ANSI_COLOR_RESET);
	close (fd);
	bzero(buffer, 1350);
	bzero(buffer2, 1350);
	fd = open("texto.txt", O_RDONLY);
	if (fd <= 0)
	{
		printf("ERROR DE APERTURA DEL ARCHIVO");
		exit (-1);
	}
	READ(fd, buffer, 1350)
	close (fd);
	fd = open("texto.txt", O_RDONLY);
	if (fd <= 0)
	{
		printf("ERROR DE APERTURA DEL ARCHIVO");
		exit (-1);
	}
	read(fd, buffer2, 1350);
	printf(" ------>\n%s :%lu\n", buffer2, strlen(buffer2));
	if (ft_strcmp(buffer, buffer2) != 0)
		printf(ANSI_COLOR_RED "\nERROR\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_GREEN "\nTEST CORRECTO\n" ANSI_COLOR_RESET);
	close (fd);
	bzero(buffer, 1350);
	bzero(buffer2, 1350);
	printf(ANSI_COLOR_YELLOW "\n--------------------\nFINALIZADO TEST READ\n--------------------\n\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"\n----------------------------\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"TEST DEL FT_STRDUP VS STRDUP\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE	"----------------------------\n" ANSI_COLOR_RESET);
	printf("\n");
	tmp2 = NULL;
	tmp1 = NULL;
	tmp2 = strdup(s2);
	tmp1 = ft_strdup(s2);
	printf("\n%s : %lu ----> '%s' : %lu\n", tmp1, strlen(tmp1), tmp2, strlen(tmp2));
	if (strcmp(tmp1, tmp2) == 0)
		printf(ANSI_COLOR_GREEN "\nTEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "\nERROR\n" ANSI_COLOR_RESET);
	free(tmp2);
	free(tmp1);
	tmp2 = NULL;
	tmp1 = NULL;
	tmp2 = strdup(s3);
	tmp1 = ft_strdup(s3);
	printf("\n%s : %lu ----> '%s' : %lu\n", tmp1, strlen(tmp1), tmp2, strlen(tmp2));
	if (strcmp(tmp1, tmp2) == 0)
		printf(ANSI_COLOR_GREEN "\nTEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "\nERROR\n" ANSI_COLOR_RESET);
	free(tmp2);
	free(tmp1);
	tmp2 = NULL;
	tmp1 = NULL;
	tmp2 = strdup(s4);
	tmp1 = ft_strdup(s4);
	printf("\n%s : %lu ----> '%s' : %lu\n", tmp1, strlen(tmp1), tmp2, strlen(tmp2));
	if (strcmp(tmp1, tmp2) == 0)
		printf(ANSI_COLOR_GREEN "\nTEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "\nERROR\n" ANSI_COLOR_RESET);
	free(tmp2);
	free(tmp1);
	tmp2 = NULL;
	tmp1 = NULL;
	tmp2 = strdup(s5);
	tmp1 = ft_strdup(s5);
	printf("\n%s : %lu ----> '%s' : %lu\n", tmp1, strlen(tmp1), tmp2, strlen(tmp2));
	if (strcmp(tmp1, tmp2) == 0)
		printf(ANSI_COLOR_GREEN "\nTEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "\nERROR\n" ANSI_COLOR_RESET);
	free(tmp2);
	free(tmp1);
	tmp2 = NULL;
	tmp1 = NULL;
	tmp2 = strdup(s6);
	tmp1 = ft_strdup(s6);
	printf("\n%s : %lu ----> '%s' : %lu\n", tmp1, strlen(tmp1), tmp2, strlen(tmp2));
	if (strcmp(tmp1, tmp2) == 0)
		printf(ANSI_COLOR_GREEN "\nTEST CORRECTO\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "\nERROR\n" ANSI_COLOR_RESET);
	free(tmp2);
	free(tmp1);
	printf(ANSI_COLOR_YELLOW "\n----------------------\nFINALIZADO TEST STRDUP\n----------------------\n\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_YELLOW "\n----------------------\nFINALIZADOS  TODOS  LOS TESTS\n----------------------\n\n" ANSI_COLOR_RESET);
	return (0);
}