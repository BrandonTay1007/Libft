NAME=libft.a

SRCS= $(wildcard *.c)

OBJECTS= $(SRCS:.c=.o)
OBJ_DIR= objs

INCLUDES=./

all:$(NAME)

$(NAME): 
	clang -c $(SRCS)

obj:
	mkdir $(OBJ_DIR)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all