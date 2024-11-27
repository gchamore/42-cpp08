# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 16:41:00 by gchamore          #+#    #+#              #
#    Updated: 2024/11/27 12:57:19 by gchamore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

CC = c++

CFLAGS = -g -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRCS = main.cpp

OBJ_DIR = objs

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

DEPS = $(OBJS:.o=.d)

all: first_header $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) && printf "\n$(CHECK_MARK) $(GREEN)Compilation Succeeded$(RESET)\n\n\n"

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

info: header

-include $(DEPS)

first_header:
	@echo "\n $$FIRST_HEADER \n"

define FIRST_HEADER
$(ORANGE)██████╗██████╗ ██████╗      ██████╗  █████╗ 
██╔════╝██╔══██╗██╔══██╗    ██╔═████╗██╔══██╗
██║     ██████╔╝██████╔╝    ██║██╔██║╚█████╔╝
██║     ██╔═══╝ ██╔═══╝     ████╔╝██║██╔══██╗
╚██████╗██║     ██║         ╚██████╔╝╚█████╔╝
 ╚═════╝╚═╝     ╚═╝          ╚═════╝  ╚════╝ $(RESET) 

$(YELLOW)EX 02$(RESET)
endef
export FIRST_HEADER

header:
	@echo "$$FIRST_HEADER"
