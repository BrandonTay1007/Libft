SRC = $(wildcard *.c)
HEADERS = $(wildcard *.h)
OBJS = $(wildcard *.o)

CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
all: $(NAME)

NAME: 
	cc $(CFLAGS) $(SRC)