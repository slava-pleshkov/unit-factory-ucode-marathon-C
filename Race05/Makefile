NAME = race05

SRCS = src/get_random_num.c src/get_term_size.c src/matrix.c src/prob.c src/main.c
SRCSOB = get_random_num.c get_term_size.c matrix.c prob.c main.c

INC = inc/matrix.h
INCOB = matrix.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -lncurses

all: install clean
install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCSOB) -I $(INCOB)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf $(INCOB)
	@rm -rf $(SRCSOB)
reinstall: uninstall clean all