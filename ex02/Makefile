CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Abstract_class

FILES = \
	main.cpp \
	Animal.cpp \
	Dog.cpp \
	Cat.cpp \
	Brain.cpp

OBJS = ${FILES:.cpp=.o}


%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o ${<:.cpp=.o}

all: $(NAME)
	
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re