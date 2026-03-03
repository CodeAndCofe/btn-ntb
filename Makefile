SRC=converter.cpp numbers.cpp conver_to_number.cpp
OBJ=$(SRC:.cpp=.o)
HEADER=Converter.hpp
FLAGS= -Wall -Werror -Wextra
NAME= binary
CC= c++


all: $(NAME)

run: all
	./binary

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $^ -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
