# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/22 12:43:44 by ldavids           #+#    #+#              #
#    Updated: 2021/09/27 14:10:31 by ldavids          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of binary file
NAME = ex02

# List of sources
SRCS = main.cpp Base.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = clang++
CPPFLAGS = -Wall -Wextra -Werror

# Commands of compilation
COMP = clang++
COMP_FLAG = -Wall -Wextra -Werror

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