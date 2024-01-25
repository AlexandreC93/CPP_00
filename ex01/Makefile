NAME	= phonebook
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf


all: $(NAME)

$(NAME): 
	@printf "$(GRAY)-Compiling $(NAME)...\n"
	@ $(CC) $(FLAGS) main.cpp Contact.cpp PhoneBook.cpp -o $(NAME)
	@printf "Executable ready.\n"

clean:
	@$(RM) $(NAME)
	@printf "Executable removed.\n"

fclean:
	@$(RM) $(NAME)
	@printf "Executable removed.\n"

re: clean all

.PHONY: all clean re