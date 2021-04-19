# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marreche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/08 11:55:32 by marreche          #+#    #+#              #
#    Updated: 2021/04/15 17:45:59 by marreche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED='\033[0;31m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
NC='\033[0m'

NAME = libft

PNAME = libftprintf.a

SRCS = ft_printf.c \
	   ft_print_string.c \

OBJFOLDER = lib/

LIBSRCS = lib/ft_atoi.c \
		  lib/ft_isalpha.c \
		  lib/ft_itoa.c \
		  lib/ft_memset.c \
		  lib/ft_bzero.c \
		  lib/ft_memcpy.c \
		  lib/ft_memccpy.c \
		  lib/ft_memmove.c \
		  lib/ft_memchr.c \
		  lib/ft_memcmp.c \
		  lib/ft_strlen.c \
		  lib/ft_strlcpy.c \
		  lib/ft_strlcat.c \
		  lib/ft_strchr.c \
		  lib/ft_strrchr.c \
		  lib/ft_strnstr.c \
		  lib/ft_strncmp.c \
		  lib/ft_isdigit.c \
		  lib/ft_isalnum.c \
		  lib/ft_isascii.c \
		  lib/ft_isprint.c \
		  lib/ft_toupper.c \
		  lib/ft_tolower.c \
		  lib/ft_calloc.c \
		  lib/ft_strdup.c \
		  lib/ft_substr.c \
		  lib/ft_strjoin.c \
		  lib/ft_strtrim.c \
		  lib/ft_split.c \
		  lib/ft_strmapi.c \
		  lib/ft_putchar_fd.c \
		  lib/ft_putstr_fd.c \
		  lib/ft_putendl_fd.c \
		  lib/ft_putnbr_fd.c \
		  lib/ft_strnew.c \
		  lib/ft_free.c \
		  lib/ft_strncpy.c \
		  lib/ft_putchar.c \
		  lib/ft_strndup.c \
		  lib/ft_putstr.c \

OBJS = ${SRCS:.c=.o}

LIBOBJS = ${LIBSRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LFLAGS = -c

RM = rm -f

AR = ar rc

all: ${NAME}

${NAME}: 
	@echo ${YELLOW}"\n------COMPILING LIBFT------\n" ${NC}
	${CC} ${CFLAGS} ${LFLAGS} ${LIBSRCS}
	@mv -f *.o lib
	@echo ${GREEN}"\n-----LIBFT COMPILED-------\n" ${NC}
	@echo ${YELLOW}"------COMPILING OWN PRINTF------\n" ${NC}
	${CC} ${CFLAGS} ${LFLAGS} ${SRCS}
	${AR} ${PNAME} ${OBJS} ${LIBOBJS}
	@ranlib ${PNAME}
	@echo ${GREEN}"\n------COMPILATION COMPLETE------\n" ${RED}

fclean: clean
		@$(RM) ${PNAME} 
clean:
	@${RM} printf_output ft_printf_output ${LIBOBJS} ${OBJS} lib/*.o 
	@echo ${GREEN}"\n------DIRECTORY CLEAN------\n" ${NC}

re: fclean all

test:
	@echo ${YELLOW}"\n------COMPILING SYSTEM PRINTF------\n" ${NC}
	${CC} ${CFLAGS} -o printf_output main.c
	@echo ${GREEN}"\n------COMPILATION COMPLETE------\n\n" ${RED}
	@echo ${YELLOW}"\n------COMPILING OWN PRINTF FOR TEST------\n" ${NC}
	${CC} ${CFLAGS} ${LFLAGS} ${LIBSRCS}
	@mv -f *.o lib
	${CC} ${CFLAGS} lib/libft.a -o ft_printf_output ft_printf.c ft_print_string.c ft_print_char.c ft_check_identifier.c ft_main.c
	@echo ${GREEN}"\n------COMPILATION COMPLETE------" ${RED}
	@echo ${BLUE}"\n-----RUN ./ft_printf_output TO TEST------\n" ${NC}

.PHONY: all clean fclean re
