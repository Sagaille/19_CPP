# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 20:15:44 by ldavids           #+#    #+#              #
#    Updated: 2021/09/30 22:16:03 by ldavids          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of binary file
NAME = ex01

# List of sources
SRCS = span.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

# Commands of compilation
COMP = clang++
COMP_FLAG = -Wall -Wextra -Werror
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

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
