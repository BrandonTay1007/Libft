NAME=libft.a

SRCS= $(wildcard *.c)

OBJECTS= $(SRCS:.c=.o)

INCLUDES=./

all:$(NAME)

$(NAME): gcc $(SRCS) -o $(SRCS:.c=.o)
	ar rcs $(NAME) $(OFILES) 

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all