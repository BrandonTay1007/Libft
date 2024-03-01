SRC = $(wildcard *.c)
HEADERS = $(wildcard *.h)
OBJS = $(wildcard *.o)
CURDIR = $(shell pwd)
CC = gcc
COBJ = -g -c
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
all: $(NAME)

NAME: 
	echo file $(CURDIR)