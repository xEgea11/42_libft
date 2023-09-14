NAME = libft.a

INCLUDES = -I ./include/ 
DOTH = libft.h 
INCLUDE_DIR = include/
INCLUDE_PATH = $(addprefix $(INCLUDE_DIR), $(DOTH))
SRC_DIR = src/
FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c \
		ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

SRC_FILES = $(addprefix $(SRC_DIR), $(FILES))	
OBJ_DIR = obj/
OBJ_FILES = $(FILES:.c=.o)
OBJS = $(addprefix $(OBJ_DIR), $(OBJ_FILES))	

GNL_DIR = gnl/
GNL_FILES = get_next_line.c get_next_line_utils.c
GNL_OBJS = $(GNL_FILES:.c=.o)

GNL_SRC = $(addprefix $(GNL_DIR), $(GNL_FILES))
GNL_SRC_OBJS = $(addprefix $(GNL_DIR), $(GNL_OBJS))

PRINTF_DIR = printf/
PRINTF_FILES = ft_printf.c ft_printf_utils.c ft_hex.c
PRINTF_OBJS = $(PRINTF_FILES:.c=.o)

PRINTF_SRC = $(addprefix $(PRINTF_DIR), $(PRINTF_FILES))
PRINTF_SRC_OBJS = $(addprefix $(PRINTF_DIR), $(PRINTF_OBJS))

BONUS_DIR = bonus_src/
BONUS_FILES = ft_lstadd_back_bonus.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
			ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BOBJ_DIR = bonus_obj/
BONUS_SRC = $(addprefix $(BONUS_DIR), $(BONUS_FILES))
BONUS_OBJS = $(BONUS_FILES:.c=.o)
BONUS_SRC_OBJS = $(addprefix $(BOBJ_DIR), $(BONUS_OBJS))

CFLAGS = -Wall -Wextra -Werror
CC = gcc

# Colores
RESET = "\033[0;m"
RED = "\033[0;31m"
GREEN = "\033[0;32m"
YELLOW = "\033[0;33m"
BLUE = "\033[0;34m"


$(NAME) : $(OBJS) $(GNL_SRC_OBJS) $(PRINTF_SRC_OBJS)
	@echo $(GREEN) [*] Compiling libft... $(RESET)
	@sleep 1
	@ar rsc  $(NAME) $(OBJS) $(GNL_SRC_OBJS) $(PRINTF_SRC_OBJS)
	@echo $(GREEN) [*] Libft compiled! $(RESET)
	@sleep 1

$(OBJ_DIR) : 
	@mkdir -p $(OBJ_DIR)
	@echo $(GREEN) [*] Objects file of libft created! $(RESET)
	@sleep 1

$(BOBJ_DIR) :
	@mkdir -p $(BOBJ_DIR)
	@echo $(GREEN) [*] Bonus objects file from libft created! $(RESET)
	@sleep 1

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJ_DIR) 
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo $(YELLOW) [*] Generating $@ ... $(RESET)

$(GNL_DIR)%.o : $(GNL_DIR)%.c 
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo $(YELLOW) [*] Generating $@ ... $(RESET)

$(PRINTF_DIR)%.o : $(PRINTF_DIR)%.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo $(YELLOW) [*] Generating $@ ... $(RESET)
 
$(BOBJ_DIR)%.o : $(BONUS_DIR)%.c | $(BOBJ_DIR) 
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo $(YELLOW) [*] Generating $@ ... $(RESET)


.PHONY: all clean fclean re bonus

bonus: $(OBJS) $(GNL_SRC_OBJS) $(PRINTF_SRC_OBJS) $(BONUS_SRC_OBJS)
	@echo $(GREEN) [*] Compiling bonus of libft... $(RESET)
	@sleep 1
	@ar rsc	$(NAME) $(OBJS) $(GNL_SRC_OBJS) $(PRINTF_SRC_OBJS) $(BONUS_SRC_OBJS)
	@echo $(GREEN) [*] Bonus of libft compiled! $(RESET) 

all: $(NAME)

clean:
	@echo $(GREEN) [*] Removing objects from libft... $(RESET)
	@sleep 1
	@rm -f $(OBJS) $(BONUS_SRC_OBJS) $(GNL_SRC_OBJS) $(PRINTF_SRC_OBJS)

	@if [ -d "$(OBJ_DIR)" ]; then \
		rm -rf "$(OBJ_DIR)"; \
	fi 

	@if [ -d "$(BOBJ_DIR)" ]; then \
		rm -rf "$(BOBJ_DIR)"; \
	fi 
	@echo $(GREEN) [*] Objects from libft removed! $(RESET)
	@sleep 1

fclean: clean 
	@rm -f $(NAME)
	@echo $(GREEN) [*] Library libft.a removed! $(RESET)
	@sleep 1

re: fclean all
