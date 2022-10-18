# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 02:02:53 by ybendavi          #+#    #+#              #
#    Updated: 2022/10/18 04:24:07 by ybendavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= action

SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp


OBJS	= ${SRCS:%.cpp=%.o}

CC	= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

all	:	$(NAME)


$(NAME)	:	$(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o ${NAME}


clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean
		make all

.PHONY	:	all clean fclean re
