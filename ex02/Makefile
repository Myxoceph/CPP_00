# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 16:34:50 by abakirca          #+#    #+#              #
#    Updated: 2024/10/23 12:22:24 by abakirca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	newlog

CC				=	c++
CFLAGS			=	-Wall -Werror -Wextra -g
STD				=	-std=c++98

RM				=	rm -rf

SRCS 			=	tests.cpp Account.cpp

OBJ 			=	$(SRCS:.cpp=.o)


COLOR_YELLOW	=	\033[0;33m
COLOR_GREEN		=	\033[0;32m
COLOR_RED		=	\033[0;31m
COLOR_END		=	\033[0m

all				:	$(NAME)

$(NAME)			:	$(OBJ)
					@$(CC) $(CFLAGS) $(STD) $^ -o $(NAME)
					@echo "\n\e[1m$(COLOR_YELLOW)$(NAME)	$(COLOR_GREEN)[is ready!]\e[0m\n$(COLOR_END)"

%.o				:	%.cpp
					@$(CC) $(CFLAGS) $(STD) -c $< -o $@

clean			:
					@$(RM) -rf $(OBJ)
					@echo "\e[1m$(COLOR_YELLOW)objects		$(COLOR_RED)[are deleted!]\e[0m$(COLOR_END)"
			

fclean			:	clean
					@$(RM) $(NAME)
					@echo "\e[1m$(COLOR_YELLOW)$(NAME)		$(COLOR_RED)[is deleted!]\e[0m$(COLOR_END)"

re				:	fclean all

.PHONY			:	all clean fclean re