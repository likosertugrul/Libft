NAME = libft.a

FLAG = -Wall -Wextra -Werror

SRC = ft_memset.c ft_bzero.c ft_isalpha.c

OBJ = $(SRC:.c=.o)

$(NAME) : 
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) $(OBJ)

all : $(NAME)

clean : 
	/bin/rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

run : re
	gcc -Wall -Wextra -Werror main.c libft.a
	./a.out

push : 
	git add .
	git commit -m "zaphood"
	git push

.PHONY : all clean fclean re 	






	
