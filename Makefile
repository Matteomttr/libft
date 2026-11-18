# The name of the libft archive
NAME= libft.a

# Compiler + flags for executable
CC= cc
CFLAGS= -Wall -Werror -Wextra

# Compiler + flags for archive
AR= ar
ARFLAGS= rsc

# List of srcs files
SRCS=	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_strcat.c \
		ft_strcpy.c \
		ft_putbits_fd.c \
		ft_strncpy.c \
		ft_strcmp.c\

# List of objects files
OBJS= $(SRCS:.c=.o)

# Compile everything
all: $(NAME)

# Compile everything into an archive
$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "Archive created successfully!"

# Converts srcs files to object files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Delete all objects files
clean:
	@rm -f $(OBJS)
	@echo "Object successfully deleted!"

# Delete all objects files and libft.a
fclean: clean
	@rm -f $(NAME)
	@echo "Archive successfully deleted!"

# Delete all objects files and libft.a, then recompile everything into an archive.
re: fclean all

.PHONY: all clean fclean re
