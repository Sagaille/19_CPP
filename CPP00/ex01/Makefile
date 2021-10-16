# Name of binary file
NAME = phonebook

# List of sources
SRCS = Contact.cpp Book.cpp main.cpp
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
