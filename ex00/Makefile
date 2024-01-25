NAME	= megaphone
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all: $(NAME)

$(NAME): 
	@printf "Compiling $(NAME)\n"
	@ $(CC) $(FLAGS) megaphone.cpp -o $(NAME)
	@printf "Exec ready\n$(RESET)"

clean:
	@$(RM) $(NAME)
	@printf "Executable removed\n"

fclean:
	@$(RM) $(NAME)
	@printf "Executable removed\n"

re: clean all

.PHONY: all clean re