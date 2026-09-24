all: test

bitwise: bitwise.c
	gcc $< -Wall -Wextra -Wlogical-not-parentheses -Wno-unused-parameter -o $@

format:
	clang-format -i *.c

test: bitwise
	./bitwise

clean:
	rm -f bitwise_lab
