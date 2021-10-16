# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 13:57:12 by ldavids           #+#    #+#              #
#    Updated: 2021/06/30 17:31:04 by ldavids          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of binary file
NAME = ex03

# List of sources
SRCS = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

# Commands of compilation
COMP = clang++
COMP_FLAG = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98*/

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
