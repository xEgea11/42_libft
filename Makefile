NAME = libft.a

SRC_DIR = src/

FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c \
		ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

SRC_FILES = $(addprefix $(SRC_DIR), $(FILES))		

GNL = get_next_line.c get_next_line_utils.c 

PRINTF = ft_printf.c ft_printf_utils.c ft_hex.c

BONUS = ft_lstadd_back_bonus.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

SRC_BONUS = $(addprefix $(SRC_DIR), $(BONUS))

CFLAGS = -Wall -Wextra -Werror

OBJS = $(FILES:.c=.o)

BOBJS = $(BONUS:.c=.o)

$(NAME) : $(OBJS)
	@ar rsc  $(NAME) $(OBJS)

$(OBJS) : $(SRC_FILES) include/libft.h
	@gcc $(CFLAGS) -c $(SRC_FILES)

$(BOBJS) : $(SRC_BONUS) include/libft.h
	@gcc $(CFLAGS) -c $(SRC_BONUS) 




.PHONY: all clean fclean re bonus 

bonus: $(OBJS) $(BOBJS)
	@ar rsc	$(NAME) $(OBJS) $(BOBJS)

all: $(NAME)

clean:
	@rm -f $(OBJS) $(BOBJS)

fclean: clean 
	@rm -f $(NAME)

re: fclean all