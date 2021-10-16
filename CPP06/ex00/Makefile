# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 14:55:45 by ldavids           #+#    #+#              #
#    Updated: 2021/09/27 14:10:06 by ldavids          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of binary file
NAME = convert

# List of sources
SRCS = main.cpp conversion.cpp spec.cpp
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
