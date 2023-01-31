NAME = libftprintf.a
CC = gcc
LIBFT = libft_src
CFLAGS = -Wall -Wextra -Werror
INC_DIR = inc
OBJ_DIR = obj/
SRC_DIR = src/
SRC_FILES	=	ft_printf ft_print_char_string ft_putnbr ft_hexa_pointer 


SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
DEPS 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .d, $(SRC_FILES)))

RM = rm -f

 

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
		mkdir -p $(OBJ_DIR)
		$(CC) -I $(INC_DIR) -c $(CFLAGS) -MMD $< -o $@

all: makelibft
	@$(MAKE) $(NAME)

makelibft:
		@$(MAKE) -C $(LIBFT)

-include $(DEPS)
$(NAME) :	$(OBJ) $(LIBFT)/libft.a
		cp	$(LIBFT)/libft.a .
		mv	libft.a $(NAME)
		ar -rcs $(NAME) $(OBJ)

clean:
		$(RM) -r $(OBJ_DIR) $(DEPS)
		$(RM) $(LIBFT)/libft.a
		@make clean -C $(LIBFT)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY : all clean re fclean makelibft
