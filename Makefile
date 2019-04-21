all: nbrs

nbrs:
	@gcc test_numbers.c test.h -L. ../ft-printf/libftprintf.a

strs:
	@gcc test_strings.c test.h -L. ../ft-printf/libftprintf.a