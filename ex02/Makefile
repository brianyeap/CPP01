# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brian <brian@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/26 18:24:32 by brian             #+#    #+#              #
#    Updated: 2025/06/19 02:27:26 by brian            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = $(wildcard *.cpp)
OFILES = $(CFILES:.cpp=.o)

Compiler = g++
Flags = -Wall -Wextra -Werror -std=c++98

NAME = ex02

all: $(NAME)

$(NAME): $(OFILES)
	$(Compiler) $(Flags) $(OFILES) -o $(NAME)

%.o: %.cpp
	$(Compiler) $(Flags) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re