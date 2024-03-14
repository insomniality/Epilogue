NAME = MikuDo
FLAGS = -g

all:
	g++ $(FLAGS) *.cpp -o $(NAME)
del:
	rm -rf $(NAME)

# settings set target.source-map (current absolute path) (replacement absolute path)
# run arg1 arg2 ...
# frame variable my_variable
