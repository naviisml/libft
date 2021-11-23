NAME = libft.a

AR = @ar
AR_FLAGS = -rcs

COMPILER = @gcc
COMPILER_FLAGS = -Wall -Werror -Wextra

# Configuration...

# Source Files...
SOURCE_FOLDER	=	./srcs
SOURCE_FILES	=	ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isascii.c \
					ft_isprint.c \
					ft_inttohex.c \
					ft_strlen.c \
					ft_strrev.c \
					ft_memset.c \
					ft_bzero.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_strcpy.c \
					ft_strlcpy.c \
					ft_strlcat.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strcmp.c \
					ft_strncmp.c \
					ft_strnstr.c \
					ft_atoi.c \
					ft_calloc.c \
					ft_realloc.c \
					ft_strdup.c \
					ft_substr.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_striteri.c \
					ft_strmapi.c \
					ft_split.c \
					ft_itoa.c \
					ft_floor.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c

# Object Files...
EXTRA_FOLDERS	=	$(SOURCE_FOLDER)
OBJECT_FOLDER	=	./objects
OBJECT_FILES	=	$(addprefix $(OBJECT_FOLDER)/, $(addprefix $(SOURCE_FOLDER)/, $(SOURCE_FILES:.c=.o)))

# Bonus Source Files...
BONUS_FILES = 	ft_lstnew_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

# Bonus Object Files...
BONUS_OBJECT_FILES = $(addprefix $(OBJECT_FOLDER)/, $(addprefix $(SOURCE_FOLDER)/, $(BONUS_FILES:.c=.o)))

.PHONY =  $(NAME) all library clean fclean re dev

# Compile the .c files to .o files...
$(OBJECT_FOLDER)/%.o: %.c
	@mkdir -p $(OBJECT_FOLDER) $(addprefix $(OBJECT_FOLDER)/, $(dir $<))
	@echo "Compiling \t$(notdir $<) (100%)"
	@$(COMPILER) $(COMPILER_FLAGS) -c $< -o $@

# Compile the program...
$(NAME): $(OBJECT_FILES)
	@echo "Building $(NAME)... (100%)"
	$(AR) $(AR_FLAGS) $(NAME) $(OBJECT_FILES)

# Compile the program with bonus...
bonus: $(NAME) $(BONUS_OBJECT_FILES)
	@echo "Building bonus... (100%)"
	$(AR) $(AR_FLAGS) $(NAME) $(BONUS_OBJECT_FILES)

all: $(NAME)

# Remove the `object` folder and files...
clean:
	@rm -rf $(OBJECT_FILES) $(OBJECT_FOLDER)

# Remove the `object` and `build` folder and files...
fclean: clean
	@rm -rf $(NAME) $(BUILD_FOLDER)

# Clean the program up and re-compile it...
re: fclean all

# Re-compile the program and run the script...
dev: re
	@echo "Running $(NAME)...""
	@$(NAME)