#Names######################################
NAME := libft.a

#Source#####################################
#PATH_SRCS = srcs/

#SOURCES := $(wildcard $(PATH_SRCS)*.c)
SOURCES = *.c

#Objets#####################################
#PATH_OBJ = obj/
#OBJ = $(SOURCES: .c= .o)
OBJ = *.o
#Includes###################################
INCLUDES = libft.h

#Compilation################################
CC = cc

CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wall
#Rules######################################

$(OBJ): $(SOURCES)
	$(CC) $(CFLAGS) -c $(SOURCES) -I $(INCLUDES)

all: $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean
	$(MAKE)