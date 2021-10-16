# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/02 21:23:52 by ldavids           #+#    #+#              #
#    Updated: 2021/10/02 21:24:16 by ldavids          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of binary file
NAME = ex02

# List of sources
SRCS = mutantstack.cpp main.cpp
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
