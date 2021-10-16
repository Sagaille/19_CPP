# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/05 15:08:13 by ldavids           #+#    #+#              #
#    Updated: 2021/06/05 15:21:05 by ldavids          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of binary file
NAME = megaphone

# List of sources
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

# Commands of compilation
COMP = clang++
COMP_FLAG = -Wall -Wextra -Werror -std=c++98

# Others command
RM = /bin/rm

# Functions
all : $(NAME)

${NAME} : $(OBJS)
		$(COMP) $(COMP_FLAG) -o $(NAME) $(OBJS)

clean :
		@${RM} -rf ${OBJS}

fclean : clean
		@${RM} -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re
