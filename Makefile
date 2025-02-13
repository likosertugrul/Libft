NAME = libft.a

FLAG = -Wall -Wextra -Werror

SRC = ft_memset.c ft_bzero.c ft_isalpha.c ft_memcpy.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_strlcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_strnstr.c    \
	ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_split.c \
	ft_print_helpers.c ft_print_hex.c ft_print_ptr.c ft_print_unsigned.c ft_printf.c ft_printstr.c \
	ft_putchar.c ft_putstr.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS:.c=.o)

$(NAME) : 
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) $(OBJ)

bonus : $(OBJ) $(BONUS_OBJ)
	ar rc $(NAME) $(OBJ) $(BONUS_OBJ)
	ranlib $(NAME)

all : $(NAME)

clean : 
	/bin/rm -f $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

run : re bonus 
	gcc $(FLAG) main.c libft.a
	./a.out

push : 
	git add .
	git commit -m "To infinity and beyonds"
	git push

.PHONY : all clean fclean re 	






	
