# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brian <brian@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/26 16:58:24 by brian             #+#    #+#              #
#    Updated: 2025/06/19 02:43:09 by brian            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFILES = $(wildcard src/*.cpp)
OFILES = $(CFILES:src/%.cpp=%.o)

Compiler = g++
Flags = -Wall -Wextra -Werror -std=c++98
INCLUDES = -Iincludes

NAME = ex05

all: $(NAME)

$(NAME): $(OFILES)
	$(Compiler) $(Flags) $(OFILES) -o $(NAME)

%.o: src/%.cpp
	$(Compiler) $(Flags) -c $< -o $@ $(INCLUDES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re