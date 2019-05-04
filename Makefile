all: nbrs

nbrs:
	@gcc test_numbers.c test.h -L. ../my-printf/libftprintf.a