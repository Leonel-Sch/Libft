#Names######################################
NAME := libft.a

#Source#####################################
#PATH_SRCS = srcs/

#SOURCES := $(wildcard $(PATH_SRCS)*.c)
#SOURCES = *.c
SOURCES += ft_atoi.c
SOURCES += ft_bzero.c
SOURCES += ft_calloc.c
SOURCES += ft_isalnum.c
SOURCES += ft_isalpha.c
SOURCES += ft_isascii.c
SOURCES += ft_isdigit.c
SOURCES += ft_isprint.c
SOURCES += ft_itoa.c
SOURCES += ft_memchr.c
SOURCES += ft_memcmp.c
SOURCES += ft_memcpy.c
SOURCES += ft_memmove.c
SOURCES += ft_memset.c
SOURCES += ft_putchar_fd.c
SOURCES += ft_putendl_fd.c
SOURCES += ft_putnbr_fd.c
SOURCES += ft_putstr_fd.c
SOURCES += ft_split.c
SOURCES += ft_strchr.c
SOURCES += ft_strdup.c
SOURCES += ft_striteri.c
SOURCES += ft_strjoin.c
SOURCES += ft_strlcat.c
SOURCES += ft_strlcpy.c
SOURCES += ft_strlen.c
SOURCES += ft_strmapi.c
SOURCES += ft_strncmp.c
SOURCES += ft_strnstr.c
SOURCES += ft_strrchr.c
SOURCES += ft_strtrim.c
SOURCES += ft_substr.c
SOURCES += ft_tolower.c
SOURCES += ft_toupper.c
SOURCES += ft_printf.c
SOURCES += ft_printf_dependancy.c
SOURCES += ft_putnbr_base_fd.c
SOURCES += ft_lstadd_back.c
SOURCES += ft_lstadd_front.c
SOURCES += ft_lstclear.c
SOURCES += ft_lstdelone.c
SOURCES += ft_lstiter.c
SOURCES += ft_lstlast.c
SOURCES += ft_lstmap.c
SOURCES += ft_lstnew.c
SOURCES += ft_lstsize.c

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


all: $(NAME)
 
$(NAME): $(SOURCES)
	$(CC) $(CFLAGS) -c $(SOURCES) -I $(INCLUDES)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean
	$(MAKE)
