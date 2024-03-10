NAME= libft.a

SRC= $(wildcard *.c)
OBJ= $(wildcard *.o)
OBJDIR= objs/


all: $(NAME)
	
$(NAME):
	cc -c -Wall -Werror -Wextra $(SRC)
	ar rcs $(NAME) $(SRC:.c=.o)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

bonus:
	cc -c -Wall -Werror -Wextra $(SRC)
	ar rcs $(NAME) $(SRC:.c=.o)
.PHONY:  all clean fclean re