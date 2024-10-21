# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/20 17:16:20 by abakirca          #+#    #+#              #
#    Updated: 2024/10/20 19:21:43 by abakirca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	megaphone

CC				=	g++
CFLAGS			=	-Wall -Werror -Wextra
STD				=	-std=c++98

RM				=	rm -rf

SRCS 			=	megaphone.cpp

OBJ 			=	$(SRCS:.cpp=.o)


COLOR_YELLOW	=	\033[0;33m
COLOR_GREEN		=	\033[0;32m
COLOR_RED		=	\033[0;31m
COLOR_END		=	\033[0m

all				:	$(NAME)

$(NAME)			:	$(OBJ)
					@$(CC) $(CFLAGS) $^ -o $(NAME)
					@echo "\n\e[1m$(COLOR_YELLOW)$(NAME)	$(COLOR_GREEN)[is ready!]\e[0m\n$(COLOR_END)"

%.o				:	%.cpp
					@$(CC) $(FLAGS) -c $< -o $@

clean			:
					@$(RM) -rf $(OBJ)
					@echo "\e[1m$(COLOR_YELLOW)objects		$(COLOR_RED)[are deleted!]\e[0m$(COLOR_END)"
			

fclean			:	clean
					@$(RM) $(NAME)
					@echo "\e[1m$(COLOR_YELLOW)$(NAME)	$(COLOR_RED)[is deleted!]\e[0m$(COLOR_END)"

re				:	fclean all

.PHONY			:	all clean fclean re