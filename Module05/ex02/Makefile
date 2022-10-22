# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 02:02:53 by ybendavi          #+#    #+#              #
#    Updated: 2022/10/22 16:47:34 by ybendavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bureau

SRCS	= main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp

CC	= c++

OBJS	= $(SRCS:.cpp=.o)

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3

all	:	$(NAME)

%.o	:	%.cpp
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME)	:	$(OBJS)
		$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $@

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean
		make

.PHONY	:	all fclean clean re
